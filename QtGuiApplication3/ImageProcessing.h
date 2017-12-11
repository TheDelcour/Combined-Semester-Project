#pragma once
#include "ImageProcessing.h"
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "blobDetection.h"
#include "TemplateCombiner1.h"
#include "Seperation.h"
#include "Player.h"
#include "Monster.h"
#include "Fight.h"

using namespace cv;
using namespace std;

class ImageProcessing
{
public:
	ImageProcessing();
	void ImageProcessing1();
	~ImageProcessing();
	int monsterPlayed;
	int turn;
	int p1Attack;
	int p1Lvl;
	int p2Lvl;
	int p2Attack;
	int monsLvl;
	int classP1;
	int classP2;
	int itemsP1;
	int itemsP2;
	bool nextTurn;
	string badStuff;
};

