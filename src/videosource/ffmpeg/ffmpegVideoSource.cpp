/////////////////////////////////////////////////////////////////////////////////////////
//
//		Project Cinnamon
//			Author:	Carmelo J. Fdez-Agüera (a.k.a. Technik)
//			Date:	2014-06-28
//
/////////////////////////////////////////////////////////////////////////////////////////
#include "ffmpegVideoSource.h"

extern "C" {
	#ifndef __STDC_CONSTANT_MACROS
    #define __STDC_CONSTANT_MACROS
	#endif
	#include <libavcodec/avcodec.h>
	#include <libavformat/avformat.h>
}

namespace cinnamon{

	//------------------------------------------------------------------------------------------------------------------
	FFmpegVideoSource::FFmpegVideoSource() {
		av_register_all();
	}

	//------------------------------------------------------------------------------------------------------------------
	bool FFmpegVideoSource::openFile(const char* _fileName) {
		AVFormatContext * formatContext;
		if(avformat_open_input(&formatContext, _fileName, nullptr, nullptr))
			return false; // Unable to open the file

		return false;
	}

	//------------------------------------------------------------------------------------------------------------------
	bool FFmpegVideoSource::getFrame(Image &) {
		return false;
	}

}	//	namespace cinnamon