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

	template<typename ChannelType_, unsigned nChannels_>
	class Image{
	public:
		Image(const ChannelType_ *_imgBuff, unsigned _rows, unsigned _cols);

		ChannelType_&		operator()	(unsigned _x, unsigned _y);
		const ChannelType_& operator()	(unsigned _x, unsigned _y) const;

	private:
		ChannelType_ *mPtr = nullptr;
		unsigned mRows = 0, mCols = 0;
	};

}	//	namespace cinnamon

#include"Image.inl"

#endif	// _PROJECT_CINNAMON_COMMON_IMAGE_H_