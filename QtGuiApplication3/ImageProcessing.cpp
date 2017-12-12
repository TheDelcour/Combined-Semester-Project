#include "ImageProcessing.h"

Mat im;
Mat im2;
Mat im3;
cv::Mat tpl1 = imread("C:/Users/Tobia/Desktop/templates/template1.png", 0);
cv::Mat tpl2 = imread("C:/Users/Tobia/Desktop/templates/template2.png", 0);
cv::Mat tpl3 = imread("C:/Users/Tobia/Desktop/templates/template3.png", 0);
cv::Mat tpl4 = imread("C:/Users/Tobia/Desktop/templates/template4.png", 0);
cv::Mat tpl5 = imread("C:/Users/Tobia/Desktop/templates/template5.png", 0);
cv::Mat tpl6 = imread("C:/Users/Tobia/Desktop/templates/template6.png", 0);
cv::Mat tpl7 = imread("C:/Users/Tobia/Desktop/templates/template7.png", 0);
cv::Mat tpl8 = imread("C:/Users/Tobia/Desktop/templates/template8.png", 0);


extern vector<Mat> List_Template_Pool1{ tpl1, tpl2, tpl3, tpl4, tpl5 };
extern vector<Mat> List_Template_Pool2{ tpl6, tpl7, tpl8, tpl4, tpl5 };
extern vector<Mat> List_Template_Pool3{ tpl1, tpl2, tpl3, tpl4, tpl5, tpl6, tpl7, tpl8 };



ImageProcessing::ImageProcessing()
{

}


ImageProcessing::~ImageProcessing()
{
}

void ImageProcessing::ImageProcessing1(){
	Player player1 = Player(0, 0);
	Player player2 = Player(0, 0);
	Monster monster1 = Monster(0);
	Fight fight;
	player1.setLvl(0);
	player2.setLvl(0);
	turn = 2;
	VideoCapture stream1(0); //0 is the id of video device.0 if you have only one
	TemplateCombiner1 combiner = TemplateCombiner1();

	if (!stream1.isOpened()) { //check if video device has been initialised
		cout << "cannot open camera";
	}
	stream1.set(cv::CAP_PROP_FRAME_WIDTH, 1280); // valueX = your wanted width 
	stream1.set(cv::CAP_PROP_FRAME_HEIGHT, 720); // valueY = your wanted heigth

	//unconditional loop
	while (true) {
		stream1.read(im2);

		flip(im2, im2, 0);
		cvtColor(im2, im3, CV_BGR2GRAY);
		GaussianBlur(im3, im, Size(15, 15), 3, 3);

		if (nextTurn == true){
			nextTurn = false;
		}

		Mat img = im;
		Mat img2 = im;
		Mat img3 = im;
		Mat img4 = im;
		Mat img5 = im;
		Mat img6 = im;
		Mat img7 = im;
		Mat img8 = im;
		Mat img9 = im;
		Mat img10 = im;
		Mat img11 = im;
		Mat img12 = im;
		Mat img13 = im;
		Mat img14 = im;
		Mat img15 = im;
		Mat img16 = im;
		Mat img17 = im;


		Rect gearP1(160, 495, 120, 225); //bottom left
		Rect gear1P1(280, 495, 120, 225);
		Rect gearP2(860, 1, 120, 220); //top right
		Rect gear1P2(980, 1, 120, 220);
		Rect classP1(1, 487, 160, 100); //left
		Rect classP2(1120, 480, 160, 100); //right
		Rect monsterP1(1, 130, 160, 100); //left
		Rect monsterP2(1120, 105, 160, 100); //right
		Rect munchkinP1(476, 1, 160, 220);//top
		Rect munchkinP2(636, 1, 160, 220);
		Rect monster1P1(476, 500, 160, 220); //bottom
		Rect monster1P2(636, 500, 160, 220);
		Rect r(240, 254, 64, 100);//Turn
		Rect r2(240, 370, 64, 100);//Fight
		Rect r3(208, 386, 32, 65);//Run
		Rect r4(973, 240, 64, 100);//fight p2
		Rect r5(973, 350, 64, 100);//turn p2
		Rect r6(1037, 255, 36, 70);//Run p2


		Mat roiGearP1(img(gearP1));
		Mat roiGear1P1(img16(gear1P1));
		Mat roiGearP2(img2(gearP2));
		Mat roiGear1P2(img17(gear1P2));
		Mat roiClassP1(img3(classP1));
		Mat roiClassP2(img4(classP2));
		Mat roiMonsterP1(img5(monsterP1));
		Mat roiMonsterP2(img6(monsterP2));
		Mat roiMunchkinP1(img7(munchkinP1));
		Mat roiMunchkinP2(img8(munchkinP2));
		Mat roiMonster1P1(img9(monster1P1));
		Mat roiMonster1P2(img10(monster1P2));
		Mat roi3b(img11(r)); //turn
		Mat roi3b2(img12(r2)); //fight
		Mat roi3b3(img13(r3)); //run
		Mat roi3b4(img14(r4)); //fightp2
		Mat roi3b5(img15(r5)); //turn p2
		Mat roi3b6(img16(r6)); //run p2

		Seperation sepGearP1 = Seperation(roiGearP1, 70);
		Seperation sepGear1P1 = Seperation(roiGear1P1, 70);
		Seperation sepGearP2 = Seperation(roiGearP2, 50);
		Seperation sepGear1P2 = Seperation(roiGear1P2, 50);
		Seperation sepClassP1 = Seperation(roiClassP1, 50);
		Seperation sepClassP2 = Seperation(roiClassP2, 50);
		Seperation sepMonsterP1 = Seperation(roiMonsterP1, 50);
		Seperation sepMonsterP2 = Seperation(roiMonsterP2, 50);
		Seperation sepMunchkinP1 = Seperation(roiMunchkinP1, 110);
		Seperation sepMunchkinP2 = Seperation(roiMunchkinP2, 100);
		Seperation sepMonster1P1 = Seperation(roiMonster1P1, 60);
		Seperation sepMonster1P2 = Seperation(roiMonster1P2, 60);
		Seperation sepBlobDetect = Seperation(roi3b, 68);
		Seperation sepBlobDetect2 = Seperation(roi3b2, 68);
		Seperation sepBlobDetect3 = Seperation(roi3b3, 68);
		Seperation sepBlobDetect4 = Seperation(roi3b4, 60);
		Seperation sepBlobDetect5 = Seperation(roi3b5, 60);
		Seperation sepBlobDetect6 = Seperation(roi3b6, 60);


		TemplateMatching tempGearP1 = TemplateMatching(sepGearP1.sepIm, List_Template_Pool1);
		TemplateMatching tempGear1P1 = TemplateMatching(sepGear1P1.sepIm, List_Template_Pool1);
		TemplateMatching tempGearP2 = TemplateMatching(sepGearP2.sepIm, List_Template_Pool2);
		TemplateMatching tempGear1P2 = TemplateMatching(sepGear1P2.sepIm, List_Template_Pool2);
		TemplateMatching tempClassP1 = TemplateMatching(sepClassP1.sepIm, List_Template_Pool1);
		TemplateMatching tempClassP2 = TemplateMatching(sepClassP2.sepIm, List_Template_Pool1);
		TemplateMatching tempMonsterP1 = TemplateMatching(sepMonsterP1.sepIm, List_Template_Pool3);
		TemplateMatching tempMonsterP2 = TemplateMatching(sepMonsterP2.sepIm, List_Template_Pool3);
		TemplateMatching tempMunchkinP1 = TemplateMatching(sepMunchkinP1.sepIm, List_Template_Pool1);
		TemplateMatching tempMunchkinP2 = TemplateMatching(sepMunchkinP2.sepIm, List_Template_Pool2);
		TemplateMatching tempMonster1P1 = TemplateMatching(sepMonster1P1.sepIm, List_Template_Pool1);
		TemplateMatching tempMonster1P2 = TemplateMatching(sepMonster1P2.sepIm, List_Template_Pool2);

		blobDetection blobDetect = blobDetection(sepBlobDetect.sepIm, 58, 100);
		blobDetection blobDetect2 = blobDetection(sepBlobDetect2.sepIm, 58, 100);
		blobDetection blobDetect3 = blobDetection(sepBlobDetect3.sepIm, 32, 65);

		blobDetection blobDetect4 = blobDetection(sepBlobDetect4.sepIm, 58, 100);
		blobDetection blobDetect5 = blobDetection(sepBlobDetect5.sepIm, 58, 100);
		blobDetection blobDetect6 = blobDetection(sepBlobDetect6.sepIm, 32, 65);


		//set variable values for the GUI 
		//sets player attack and lvl 
		player1.setAttack(combiner.CalculateMunchkinAttack(tempGearP1, tempGear1P1, tempMunchkinP1, tempMunchkinP2));
		p1Attack = player1.getAttack();
		p1Lvl = player1.getLvl();

		player2.setAttack(combiner.CalculateMunchkinAttack(tempGearP2, tempGear1P2, tempMunchkinP1, tempMunchkinP2));
		p2Attack = player2.getAttack();
		p2Lvl = player2.getLvl();


		//decide what monster zone decides monster played 
		if (turn == 1){
			monsterPlayed = monster1.ExtractMonsterTemplateId(tempMonsterP1);
		}
		if (turn == 2){
			monsterPlayed = monster1.ExtractMonsterTemplateId(tempMonsterP2);
		}

		//decide which monster is played and set lvl and badstuff
		monster1 = Monster(monsterPlayed);
		monster1.setAttack(combiner.CalculateMonsterAttack(monster1, tempMonster1P2, tempMonster1P1));
		monsLvl = monster1.getAttack();
		badStuff = monster1.getBadStuff();

		//decide what class is played
		classPlayedP1 = monster1.ExtractClassTemplateId(tempClassP1);
		classPlayedP2 = monster1.ExtractClassTemplateId(tempClassP2);

		//decides how many items the class has for p1
		if (player1.getAttack() < 3){
			itemsP1 = 0;
		}
		if (player1.getAttack() >3 && player1.getAttack()<6){
			itemsP1 = 1;
		}
		if (player1.getAttack() >6 && player1.getAttack()<9){
			itemsP1 = 2;
		}
		if (player1.getAttack() >9 && player1.getAttack()<12){
			itemsP1 = 3;
		}
		if (player1.getAttack() >12 && player1.getAttack()<15){
			itemsP1 = 4;
		}
		if (player1.getAttack() >15){
			itemsP1 = 5;
		}

		//decides how many items the class has for p1
		if (player2.getAttack() < 3){
			itemsP2 = 0;
		}
		if (player2.getAttack() >3 && player2.getAttack()<6){
			itemsP2 = 1;
		}
		if (player2.getAttack() >6 && player2.getAttack()<9){
			itemsP2 = 2;
		}
		if (player2.getAttack() >9 && player2.getAttack()<12){
			itemsP2 = 3;
		}
		if (player2.getAttack() >12 && player2.getAttack()<15){
			itemsP2 = 4;
		}
		if (player2.getAttack() >15){
			itemsP2 = 5;
		}

		//if blob found in blob zones
		if (blobDetect.effect == 1){
			cout << "Fight" << endl;
			fight.Fighting(player1, monster1);
			p1Lvl = player1.getLvl();
		}

		if (blobDetect2.effect == 1){
			cout << "Turn" << endl;
			turn = 2;
			nextTurn = true;
		}

		if (blobDetect3.effect == 1){
			cout << "Run" << endl;
			player1.setLvl(player1.getLvl() - 1);
			p1Lvl = player1.getLvl();
		}


		//Player two buttons Turn, Fight, Run
		if (blobDetect4.effect == 1){
			cout << "Fight P2";
			fight.Fighting(player2, monster1);
			p2Lvl = player2.getLvl();
		}

		if (blobDetect5.effect == 1){
			cout << "Turn P2" << endl;
			turn = 1;
			nextTurn = true;
		}

		if (blobDetect6.effect == 1){
			cout << "Run P2" << endl;
			player2.setLvl(player2.getLvl() - 1);
			p2Lvl = player2.getLvl();
		}

		if (player1.getLvl() >= 10){
			gameOver = 1;
		}

		if (player2.getLvl() >= 10){
			gameOver = 2;
		}

		/*tempGearP1.~TemplateMatching();
		tempGear1P1.~TemplateMatching();
		tempGearP2.~TemplateMatching();
		tempGear1P2.~TemplateMatching();
		tempClassP1.~TemplateMatching();
		tempClassP2.~TemplateMatching();
		tempMunckinP1.~TemplateMatching();
		tempMunckinP2.~TemplateMatching();
		tempMonster1P1P2.~TemplateMatching();
		blobDetect.~blobDetection();
		blobDetect2.~blobDetection();
		blobDetect3.~blobDetection();
		blobDetect4.~blobDetection();
		blobDetect5.~blobDetection();
		blobDetect6.~blobDetection();
		*/


		// Show blobs
		/*imshow("keypoints", blobDetect.im_with_keypoints);
		imshow("keypoints2", blobDetect2.im_with_keypoints);*/

		/*imshow("munckinp1", roiMunchkinP1P2);
		imshow("monsterp2", roiMonster1P1P2);*/
		imshow("result2", im);

		if (waitKey(30) >= 0)
			break;
	}
}