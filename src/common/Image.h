/////////////////////////////////////////////////////////////////////////////////////////
//
//		Project Cinnamon
//			Author:	Pablo Ramon Soria
//			Date:	2014-07-01
//
/////////////////////////////////////////////////////////////////////////////////////////

#ifndef _PROJECT_CINNAMON_COMMON_IMAGE_H_
#define _PROJECT_CINNAMON_COMMON_IMAGE_H_

namespace cinnamon{

	template<typename type_, int noChannels_>
	class Image{
	public:
		Image(const type_ *_imgPtr, const int _rows, const int _cols);

		type_& operator()(const int _x,const int _y);

	private:
		type_ *mPtr = nullptr;
		int mRows = 0, mCols = 0;
	};



}	//	namespace cinnamon

#endif	// _PROJECT_CINNAMON_COMMON_IMAGE_H_