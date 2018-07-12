#include"FaceID.h"

Mat* CalIntegralDiagrams(Mat* samples){
	Mat* intergralMat = new Mat[SAMPLE_NUM];
	for (int num = 0; num < SAMPLE_NUM; num++){
		intergralMat[num] = samples[num].clone();
		intergralMat[num].at<uchar>(0, 0) = samples[num].at<uchar>(0, 0);
		for (int j = 1; j < MAP_ROWS; j++)//�����һ�е�ֵ
			intergralMat[num].at<uchar>(j, 0) = intergralMat[num].at<uchar>(j-1, 0);
		for (int i = 1; i < MAP_ROWS; i++)//�����һ�е�ֵ
			intergralMat[num].at<uchar>(0, i-1) = intergralMat[num].at<uchar>(0, i-1);
		for (int j = 1; j < MAP_ROWS; j++) {
			for (int i = 1; i < MAP_COLS; i++) {
				//intergralMat->at<uchar>(j, i) = intergralMat->at<uchar>(j-1, i-1)+;
			}
		}
	}
	return intergralMat;
}

Mat* GetSamples(string& pathName, bool*& results) {
	int imageNumber = 0;
	string line;
	ifstream fin;
	fin.open(pathName);
	if (!fin.is_open())
	{
		cout << "File is not exit" << endl;
		abort();
	}
	while (fin >> line)
		imageNumber++;
	fin.close();
	Mat *imageSet = new Mat[imageNumber];
	fin.open(pathName);
	string imagePath;
	for (int i = 0; i < imageNumber; i++)
	{
		fin >> imagePath;

		imageSet[i] = imread(imagePath, 0);
	}
}