#include"FaceID.h"

int main() {
	string samplePathName;//����·����
	string sampleWeightPathName;//����Ȩ��·����
	string* classifierPathName;//����ǿ�������е���������Ȩ��·��������
	Sample* samples;//��������

	samples = GetSamples(samplePathName);//��ȡ����
	LoadSampleWeights(sampleWeightPathName,samples);//��������Ȩ��
	CalIntegralDiagrams(samples);//������������ͼ
	Train(samples);//ѵ������ �ڼ���������Ȩ���Լ���ǿ�������е�����������Ȩ��
}
