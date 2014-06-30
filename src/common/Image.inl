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
	template<typename type_, int rows_, int cols_>
	Image<type_, rows_, cols_>::Image(const type_ *_imgPtr){
		
	}

	//----------------------------------------------------------------------------------
	template<typename type_, int rows_, int cols_>
	type_* Image<type_, rows_, cols_>::getPointer(){
		return mPtr;
	}

	//----------------------------------------------------------------------------------
	template<typename type_, int rows_, int cols_>
	type_& Image<type_, rows_, cols_>::operator()(const int _x, const int _y){
		return mPtr[_y*rows_ + _x];
	}


}	//	namespace cinnamon