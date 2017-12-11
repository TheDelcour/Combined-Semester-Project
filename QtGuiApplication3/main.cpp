#include "QtGuiApplication3.h"
#include <QtWidgets/QApplication>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <thread>
#include "ImageProcessing.h"

using namespace cv;
using namespace std;

ImageProcessing ip;

int main(int argc, char *argv[])
{
	thread t1(&ImageProcessing::ImageProcessing1,ip);
	QApplication a(argc, argv);
	QtGuiApplication3 w;
	w.ipRef = ip;
	//w.ipThingy = ip;
	w.show();
	//w.UpdateP1Lvl(p1Lvl);
	return a.exec();
	t1.join();
}
