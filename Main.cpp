#include"FaceID.h"

int main() {
	string samplePathName;//����·����
	string sampleWeightPathName;//����Ȩ��·����
	string* classifierPathName;//����ǿ�������е���������Ȩ��·��������
	Mat* samples;//��������
	Mat*integralDiagrams;//����ͼ����
	Mat sampleWeights;//����Ȩ�ؾ���

	sampleWeights = LoadSampleWeights(sampleWeightPathName);//��������Ȩ��
	samples = GetSamples(samplePathName);//��ȡ����
	integralDiagrams = CalIntegralDiagrams(samples);//������������ͼ
	Train(samples, integralDiagrams);//ѵ������ �ڼ���������Ȩ���Լ���ǿ�������е�����������Ȩ��
}
