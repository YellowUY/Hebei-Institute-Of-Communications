//�ӱ���ýѧԺ_������ƻ���_��׼��ʽ���һԪ���η���_10.29_Deng
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c, x1, x2, dlt;
	printf ("�����뷽�̵Ķ�����ϵ����");
	scanf("%lf", &a);
	printf("�����뷽�̵�һ����ϵ����");
	scanf("%lf", &b);
	printf("�����뷽�̵ĳ�����ϵ����");
	scanf("%lf", &c);
	dlt = b * b - 4 * a * c;
	x1 = (-b + sqrt(dlt)) / 2 / a;
	x2 = (-b - sqrt(dlt)) / 2 / a;
	printf("x1=%lf x2=%lf\n", x1, x2);
	return 0;
}