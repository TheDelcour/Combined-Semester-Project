#include "StartScreen.h"


StartScreen::StartScreen()
{
	Mat image;
	image = imread("C:/Users/Tobia/OneDrive/Dokumenter/Visual Studio 2013/Projects/QtGuiApplication3/QtGuiApplication3/GUI_Pics/Start1.png", CV_LOAD_IMAGE_COLOR);
	Mat image1;
	Size size(1280, 720);
	resize(image, image1, size);
	for (;;)
	{
		namedWindow("StartUp", 1);
		resizeWindow("StartUp", 1280, 720);
		imshow("StartUp", image1);
		if (waitKey(30) >= 0)
			break;
	}
	destroyWindow("StartUp");
}


StartScreen::~StartScreen()
{
}
