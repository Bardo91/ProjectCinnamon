/////////////////////////////////////////////////////////////////////////////////////////
//
//		Project Cinnamon
//			Author:	Pablo R.S.
//			Date:	2014-06-24
//
/////////////////////////////////////////////////////////////////////////////////////////


#ifndef _PROJECT_CINNAMON_VIDEOSOURCE_VIDEOSOURCE_H_
#define _PROJECT_CINNAMON_VIDEOSOURCE_VIDEOSOURCE_H_

namespace cinnamon{

	class Image;

	class VideoSource{
	public:
		/// Returns false if it wasn't able to retrieve a new frame
		virtual bool getFrame(Image &_image) = 0;


	};

}	//	namespace cinnamon


#endif	//_PROJECT_CINNAMON_VIDEOSOURCE_VIDEOSOURCE_H_