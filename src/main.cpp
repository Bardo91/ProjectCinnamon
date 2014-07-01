/////////////////////////////////////////////////////////////////////////////////////////
//
//		Project Cinnamon
//			Author:	Carmelo J. Fdez-Agüera (a.k.a. Technik)
//			Date:	2014-06-28
//
/////////////////////////////////////////////////////////////////////////////////////////

#include "videosource/ffmpeg/ffmpegVideoSource.h"
#include <iostream>

using namespace cinnamon;
using namespace std;

int main(int , const char** _argv) {

	FFmpegVideoSource* src = new FFmpegVideoSource();
	if(src->openFile(_argv[0]))
		cout << "Success openning file: " << _argv[0] << endl;
	else
		cout << "Error opening file: " << _argv[0] << endl;
	delete src;
	return 0;
}