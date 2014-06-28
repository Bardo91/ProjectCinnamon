/////////////////////////////////////////////////////////////////////////////////////////
//
//		Project Cinnamon
//			Author:	Carmelo J. Fdez-Agüera (a.k.a. Technik)
//			Date:	2014-06-28
//
/////////////////////////////////////////////////////////////////////////////////////////
#include "ffmpegVideoSource.h"

#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>

namespace cinnamon{

	//------------------------------------------------------------------------------------------------------------------
	FFmpegVideoSource::FFmpegVideoSource() {
		av_register_all();
	}

	//------------------------------------------------------------------------------------------------------------------
	bool FFmpegVideoSource::getFrame(Image &_image) {
	}

}	//	namespace cinnamon