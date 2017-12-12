#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
 
using namespace cv;
using namespace std;

class blobDetection
{
public:
	Mat im_with_keypoints;
	blobDetection();
	blobDetection(Mat image, int x2, int y2);
	int effect;
	~blobDetection();
	int blobeffect();
};

