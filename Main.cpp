#include"FaceID.h"

int main() {
	string samplePathName="Code/";//����·����
	string sampleWeightPathName;//����Ȩ��·����
	string* classifierPathName;//����ǿ�������е���������Ȩ��·��������
	Sample* samples;//��������

	samples = GetSamples(samplePathName);//��ȡ����
	CalIntegralDiagrams(samples);//������������ͼ
	Train(samples);//ѵ������ �ڼ���������Ȩ���Լ���ǿ�������е�����������Ȩ��
}
