#include "Seperation.h"
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;

int value;
Mat sepIm;
Seperation::Seperation(Mat imROI, int TH)
{
	if (imROI.data && !imROI.empty()){
		for (size_t y = 0; y < imROI.rows; ++y) {
			for (size_t x = 0; x < imROI.cols; ++x){
				value = imROI.at<unsigned char>(y, x);
				if (value >= TH){
					imROI.at<unsigned char>(y, x) = 0;
				}
				else{
					imROI.at<unsigned char>(y, x) = 255;
				}
			}
		}
	}
	sepIm = imROI;
}


Seperation::~Seperation()
{
}
