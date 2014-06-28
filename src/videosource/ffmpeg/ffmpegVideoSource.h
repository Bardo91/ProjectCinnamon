/////////////////////////////////////////////////////////////////////////////////////////
//
//		Project Cinnamon
//			Author:	Carmelo J. Fdez-Agüera (a.k.a. Technik)
//			Date:	2014-06-28
//
/////////////////////////////////////////////////////////////////////////////////////////
#ifndef _PROJECT_CINNAMON_VIDEOSOURCE_FFMPEG_FFMPEGVIDEOSOURCE_H_
#define _PROJECT_CINNAMON_VIDEOSOURCE_FFMPEG_FFMPEGVIDEOSOURCE_H_

#include "../VideoSource.h"

namespace cinnamon{

	class Image;

	class FFmpegVideoSource : public VideoSource {
	public:
		FFmpegVideoSource();

		/// Returns false if it wasn't able to retrieve a new frame
		bool getFrame(Image &_image);
	};

}	//	namespace cinnamon

#endif	// _PROJECT_CINNAMON_VIDEOSOURCE_FFMPEG_FFMPEGVIDEOSOURCE_H_