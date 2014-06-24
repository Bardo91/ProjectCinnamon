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
	class VideoSource{
	public:
		virtual void getFrame(Image &_image) = 0;


	};

}	//	namespace cinnamon


#endif	//_PROJECT_CINNAMON_VIDEOSOURCE_VIDEOSOURCE_H_