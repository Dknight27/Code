#pragma once
#include<opencv2\core\core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2\imgproc\imgproc.hpp>
#include<iostream>
#include<fstream>
#include<array>
#include<vector>
#include <amp.h>
#include<amp_math.h>
#include<ctime>
using namespace std;
using namespace cv;
typedef float** Kernel;


/*
	------------����˶��ձ�-------------
	���о�����ļ���������"ij.txt"Ϊ׼
	i�����i��



*/
Mat generateConvKernel(int scale, Kernel def);//����һ���Զ���ľ����
Mat maxPooling(Mat ingredient, int grid, int step);//����һ�����ػ�
void compareCharacter(Mat m1, Mat m2,int factor);



