#include"FaceID.h"

int main() {
	/*//�����Ƕ����ά�������Դ��������
	Kernel vertical_edge_kernel = new float*[3];
	Kernel horizontal_edge_kernel = new float*[3];
	for (int i = 0; i < 3; i++) {
		vertical_edge_kernel[i] = new float[3]{ 1,0,-1 };//�������ֱ�߽�����
		horizontal_edge_kernel[i] = new float[3]{(float)(1-i),(float)(1 - i),(float)(1 - i) };//�����ˮƽ�߽�����
	}
	Point anchor(-1, -1);//ê�㡣����ֱ��ȫ��Ϊ��-1��-1������
	Mat vertical_kernel = generateConvKernel(3, vertical_edge_kernel);//���ɵ���ֱ�߽�����
	Mat horizontal_kernel = generateConvKernel(3, horizontal_edge_kernel);//���ɵ�ˮƽ�߽�����
	Mat img = imread("Code/1.jpg");//��ȡͼƬ
	namedWindow("Eason");//������������
	//namedWindow("Verticaled Eason");
	//namedWindow("Horizontaled Eason");
	imshow("Eason", img);
	waitKey(0);
	getchar();

	Mat vertical_out;
	Mat horizontal_out;
	Mat pool_out;
	filter2D(img, vertical_out, -1, vertical_kernel, anchor, 0);//��ֱ���
	namedWindow("��ֱ���");
	imshow("��ֱ���", vertical_out);
	filter2D(img,horizontal_out, -1, horizontal_kernel, anchor, 0);//ˮƽ���
	namedWindow("ˮƽ���");
	imshow("ˮƽ���", horizontal_out);
	compareCharacter(vertical_out, horizontal_out, 100);
	namedWindow("�ȽϺ���ֱ���");
	imshow("�ȽϺ���ֱ���", vertical_out);
	namedWindow("�ȽϺ�ˮƽ���");
	imshow("�ȽϺ�ˮƽ���", vertical_out);
	//pool_out = maxPooling(vertical_out, 2, 2);//�ػ�
	//filter2D(img, vertical_out, -1, vertical_kernel, anchor, 0);
	//pool_out = maxPooling(vertical_out, 2, 2);

	//imshow("Pooled Eason", pool_out);
	//imshow("Horizontaled Eason",horizontal_out);
	//imshow("Verticaled Eason", vertical_out);
	//imshow("Eason", img);
	waitKey(0);
	getchar();
	*/
	Mat img = imread("Code/1.jpg");
	Mat gray,mean, dev,After;
	cvtColor(img, gray, CV_RGB2GRAY);
	meanStdDev(img, mean, dev);
	double Mean, Dev;
	Mean = mean.at<double>(0,0);
	Dev = dev.at<double>(0,0);
	cout << "Mean:" << Mean << endl;
	cout << "Dev:" << Dev << endl;
	namedWindow("Fuck");
	for (int i = 0; i < gray.rows; i++)
		for (int j = 0; j < gray.cols; j++)
			gray.at<float>(i, j) = ((double)gray.at<uchar>(i, j) - Mean) / Dev;
	imshow("Fuck", gray);
	waitKey(0);
	cin.get();
}
