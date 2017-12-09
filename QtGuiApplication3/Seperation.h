#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;

class Seperation
{
public:
	Mat sepIm;
	Seperation();
	Seperation(Mat imROI, int TH);
	void MatchingMethod(int, void*);
	~Seperation();
};

