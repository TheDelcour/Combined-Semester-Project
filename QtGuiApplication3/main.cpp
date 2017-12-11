#include "QtGuiApplication3.h"
#include <QtWidgets/QApplication>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <thread>
#include "ImageProcessing.h"

using namespace cv;
using namespace std;


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtGuiApplication3 w;
	ImageProcessing ip = ImageProcessing();
	w.ipRef = ip;
	thread t1(&ImageProcessing::ImageProcessing1, &w.ipRef);
	//w.ipThingy = ip;
	w.show();
	return a.exec();
	t1.join();
}
