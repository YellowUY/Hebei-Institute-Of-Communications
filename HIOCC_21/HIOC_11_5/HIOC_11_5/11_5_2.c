//�ӱ���ýѧԺ_������ƻ���_P32ʵսѵ���������е�_11_5_Deng
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double x1, x2, y1, y2,x3,y3;
	printf("�������һ����ĺ�����");
	scanf("%lf", &x1);
	printf("�������һ�����������");
	scanf("%lf", &y1);
	printf("������ڶ�����ĺ�����");
	scanf("%lf", &x2);
	printf("������ڶ������������");
	scanf("%lf", &y2);
	x3 = (x1 + x2) / 2;
	y3 = (y1 + y2) / 2;
	printf("������е�����Ϊ��%f,%f��",x3,y3);
	return 0;
}