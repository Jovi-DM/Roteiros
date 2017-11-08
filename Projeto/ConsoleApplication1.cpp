// ConsoleApplication1.cpp : define o ponto de entrada para o aplicativo do console.
//


#include "stdafx.h"
#include <iostream>


extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libswscale/swscale.h>
}

#define AV_OUTPUT_FILE "udp://127.0.0.1:8000"
#define AV_OUTPUT_FORMAT "mpeg"
#define AV_OUTPUT_BITRATE 200000
#define AV_FRAMERATE 24
#define AV_OUTPUT_CODEC "mpeg1video"

#pragma warning(disable : 4996)

using namespace std;

typedef struct {
	AVFormatContext *formatCtx;
	AVCodecContext 	*codecCtx;
	AVCodec 		*encoder;
	AVCodec 		*audioencoder;
	AVCodecContext  *audiocodecCtx;
	AVFrame 		*frame;
	AVPacket 		packet;
} ff_input_t;

//FFMPEG output env
typedef struct {
	AVFormatContext *formatCtx;
	AVCodecContext  *codecCtx;
	AVCodec 		*encoder;
	AVStream 		*outStream;
	AVFrame  		*frame;
	AVProgram 		*program;
	AVPacket 		packet;
} ff_output_t;

int main()
{
	ff_input_t input_t;
	ff_output_t output_t;
	int frameFinalizado, gotPacket, outputStreamIndex;
	const char time_start = 0;
	char  _contEncoder = 1;
	int Topo = 0, Esquerda = 0;

	unsigned long int inch = 0;

	av_register_all();
	avformat_network_init();
	input_t.formatCtx = avformat_alloc_context();

	//iniciando o input

	if (avformat_open_input(&input_t.formatCtx, "C:\\teste.mpeg", NULL, NULL) != 0)
		return 0;



	if (!(avformat_find_stream_info(input_t.formatCtx, NULL) >= 0)) {
		return -1;
	}

	av_dump_format(input_t.formatCtx, 0, "C:\\teste.mpeg", 0);

	int videoStreamIndex = av_find_best_stream(input_t.formatCtx, AVMEDIA_TYPE_VIDEO, -1, -1, &input_t.encoder, 0);

	if (videoStreamIndex < 0) {
		cout << "Nenhuma stream de video encontrada " << endl;
		return -1;
	}

	input_t.codecCtx = input_t.formatCtx->streams[videoStreamIndex]->codec;

	if (avcodec_open2(input_t.codecCtx, input_t.encoder, NULL) < 0) {
		cout << "Nao foi possivel abrir o codec do input" << endl;
		return -1;
	}

	int audioStreamIndex = av_find_best_stream(input_t.formatCtx, AVMEDIA_TYPE_AUDIO, -1, -1, &input_t.audioencoder, 0);
	if (audioStreamIndex < 0) {
		cout << "Nenhuma stream de audio encontrada" << endl;
		return -1;
	}



	if (videoStreamIndex < 0 || audioStreamIndex < 0)
		return -2;

	cout << "VIDEO ST: " << videoStreamIndex << " AUDIO ST: " << audioStreamIndex << "\n";



	//iniciando o output



	if (avformat_alloc_output_context2(&output_t.formatCtx, input_t.formatCtx->oformat, AV_OUTPUT_FORMAT, AV_OUTPUT_FILE) < 0)
		return -3;

	output_t.outStream = avformat_new_stream(output_t.formatCtx, NULL);

	if (output_t.outStream == NULL) {
		printf("Could not create output stream\n");
		return -8;
	}

	outputStreamIndex = output_t.outStream->index;

	output_t.codecCtx = output_t.outStream->codec;
	output_t.encoder = avcodec_find_encoder_by_name(AV_OUTPUT_CODEC);
	if (output_t.encoder == NULL) {
		printf("Codec %s not found..\n", AV_OUTPUT_CODEC);
		return -1;
	}

	int width = input_t.codecCtx->width;
	int height = input_t.codecCtx->height;

	output_t.codecCtx->height = width;
	output_t.codecCtx->width = height;
	output_t.codecCtx->codec_type = AVMEDIA_TYPE_VIDEO;
	output_t.codecCtx->pix_fmt = input_t.codecCtx->pix_fmt;

	//manter o aspecto

	output_t.codecCtx->sample_aspect_ratio = input_t.codecCtx->sample_aspect_ratio;
	output_t.codecCtx->max_b_frames = input_t.codecCtx->max_b_frames;
	output_t.outStream->sample_aspect_ratio = output_t.codecCtx->sample_aspect_ratio;

	//setando custom bitrate

	output_t.codecCtx->bit_rate = AV_OUTPUT_BITRATE;

	//setando customs timebases

	output_t.codecCtx->time_base.num = 1;
	output_t.codecCtx->time_base.den = AV_FRAMERATE;
	output_t.outStream->time_base.num = 1;
	output_t.outStream->time_base.den = 90000;

	//setando o tempo de inicio

	output_t.formatCtx->start_time = input_t.formatCtx->start_time;
	output_t.outStream->start_time = output_t.formatCtx->start_time;
	av_dict_set(&output_t.formatCtx->metadata, "creation_time", &time_start, 0);

	//abrindo o codec

	if (avcodec_open2(output_t.codecCtx, output_t.encoder, NULL)) {
		cout << "Nao foi possivel abrir o codec de saida" << endl;

		return -5;
		system("PAUSE");
	}

	av_dump_format(output_t.formatCtx, 0, AV_OUTPUT_FILE, 1);

	//abrindo o output
	avio_find_protocol_name(AV_OUTPUT_FILE);

	if (avio_open(&output_t.formatCtx->pb, AV_OUTPUT_FILE, AVIO_FLAG_WRITE)) {
		cout << "Nao foi possivel abrir o output" << endl;
		return -6;
	}

	//escrevendo o formato de contexto

	if (avformat_write_header(output_t.formatCtx, &output_t.formatCtx->metadata)) {
		cout << "Erro na escritura do header" << endl;
		return -7;
	}
	cout << "Saida para " << AV_OUTPUT_FILE;
	if (output_t.outStream == NULL) {
		cout << "Não foi possivel criar a stream de output" << endl;
		return -4;
	}

	cout << " \n Gerando streams de video" << endl;

	while (av_read_frame(input_t.formatCtx, &input_t.packet) >= 0 && _contEncoder) {
		cout << "estou no while" << endl;
		if (input_t.packet.stream_index == videoStreamIndex) {
			cout << "estou no if do while" << endl;
			input_t.frame = av_frame_alloc();
			avcodec_decode_video2(input_t.codecCtx, input_t.frame, &frameFinalizado, &input_t.packet);

			if (frameFinalizado) {
				output_t.frame = av_frame_alloc();
				input_t.frame->pts = av_frame_get_best_effort_timestamp(input_t.frame);
				cout << "entrei no frame finalizado" << endl;

				cout << "Antes do picture crop" << endl;
				
				av_picture_crop((AVPicture *)output_t.frame, (AVPicture *)input_t.frame, input_t.formatCtx->streams[videoStreamIndex]->codec->pix_fmt, Topo, Esquerda);
				
				cout << "depois do picture crop" << endl;
				
				output_t.frame->height = height;
				output_t.frame->width = width;
				output_t.frame->format = input_t.frame->format;

				output_t.frame->pts = time_start + inch++;

				output_t.packet.data = NULL;
				output_t.packet.size = 0;

				av_init_packet(&output_t.packet);
				cout << "Antes do encoder" << endl;
				avcodec_encode_video2(output_t.codecCtx, &output_t.packet, output_t.frame, &gotPacket);
				cout << "Depois do encoder" << endl;
				output_t.packet.stream_index = outputStreamIndex;

				av_packet_rescale_ts(&output_t.packet, output_t.codecCtx->time_base, output_t.formatCtx->streams[outputStreamIndex]->time_base);

				if (gotPacket) {
					cout << "Entrei no got packet" << endl;
					if (av_write_frame(output_t.formatCtx, &output_t.packet) < 0) {

						cout << "Impossivel de escrever o output stream" << endl;
					}
				}
			}
		}
	}

	av_frame_free(&input_t.frame);
	system("PAUSE");

	return 0;
}