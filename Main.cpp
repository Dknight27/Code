#include"FaceID.h"

int main() {
	string posPathName; //������·����
	string negPathName;//������·����
	string* classifierPathName;//����ǿ�������е���������Ȩ��·��������
	Sample* samples;//��������

	samples = GetSamples(posPathName, negPathName);//��ȡ����
	CalIntegralDiagrams(samples);//������������ͼ
	Train(samples);//ѵ������ �ڼ���������Ȩ���Լ���ǿ�������е�����������Ȩ��
}
