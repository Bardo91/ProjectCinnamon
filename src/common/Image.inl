/////////////////////////////////////////////////////////////////////////////////////////
//
//		Project Cinnamon
//			Author:	Pablo Ramon Soria
//			Date:	2014-07-01
//
/////////////////////////////////////////////////////////////////////////////////////////


#include "Image.h"

namespace cinnamon{
	//----------------------------------------------------------------------------------
	template<typename ChannelType_, int nChannels_>
	Image<ChannelType_, nChannels_>::Image(const type_ *_imgBuff, const int _rows, const int _cols) : {
				
	}

	//----------------------------------------------------------------------------------
	template<typename ChannelType_, int nChannels_>
	ChannelType_& Image<ChannelType_, nChannels_>::operator()(const int _x, const int _y){
		return mPtr[_y*rows_ + _x];
	}

	//----------------------------------------------------------------------------------
	template<typename ChannelType_, int nChannels_>
	const ChannelType_& Image<ChannelType_, nChannels_>::operator()(const int _x, const int _y) const{
		return mPtr[_y*rows_ + _x];
	}

}	//	namespace cinnamon