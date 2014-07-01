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
#include <vector>

namespace cinnamon{
	class Core{
	public:
		bool changeVideoSource(VideoSource *_videoSource);
		bool step();

		void registerListener(std::function<void (WorldUpdate *_worldUpdate)>);
		
	private:
		VideoSource *mVideoSource;
		std::vector<std::function<void(WorldUpdate *_worldUpdate)>> mListener;
	};



}	//	namespace cinnamon

#endif	// _PROJECT_CINNAMON_CORE_CORE_H