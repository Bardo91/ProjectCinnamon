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
	template<typename type_, int noChannels_>
	Image<type_, noChannels_>::Image(const type_ *_imgPtr, const int _rows, const int _cols): {
				
	}

	//----------------------------------------------------------------------------------
	template<typename type_, int noChannels_>
	type_& Image<type_, noChannels_>::operator()(const int _x, const int _y){
		return mPtr[_y*rows_ + _x];
	}


}	//	namespace cinnamon