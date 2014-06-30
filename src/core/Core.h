/////////////////////////////////////////////////////////////////////////////////////////
//
//		Project Cinnamon
//			Author:	Pablo Ramon Soria
//			Date:	2014-07-01
//
/////////////////////////////////////////////////////////////////////////////////////////

#ifndef _PROJECT_CINNAMON_CORE_CORE_H_
#define _PROJECT_CINNAMON_CORE_CORE_H_

#include "../videosource/VideoSource.h"
#include "WorldUpdate.h"

#include <functional>

namespace cinnamon{
	class Core{
	public:
		bool changeVideoSource(VideoSource *_videoSource);
		bool process();

		bool registerListener(std::function<void (WorldUpdate * _worldUpdate)>);
		
	private:
		VideoSource *mVideoSource;
	};



}	//	namespace cinnamon

#endif	// _PROJECT_CINNAMON_CORE_CORE_H