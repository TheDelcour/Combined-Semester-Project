#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;

class TemplateMatching
{
public:
	bool temp[16];
	int myx;
	TemplateMatching();
	TemplateMatching(Mat image, vector<Mat>template_list, double maxVal);
	~TemplateMatching();
};

