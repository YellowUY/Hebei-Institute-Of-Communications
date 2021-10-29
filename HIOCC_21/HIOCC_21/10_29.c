//河北传媒学院_程序设计基础_标准公式求解一元二次方程_10.29_Deng
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c, x1, x2, dlt;
	printf ("请输入方程的二次项系数：");
	scanf("%lf", &a);
	printf("请输入方程的一次项系数：");
	scanf("%lf", &b);
	printf("请输入方程的常数项系数：");
	scanf("%lf", &c);
	dlt = b * b - 4 * a * c;
	x1 = (-b + sqrt(dlt)) / 2 / a;
	x2 = (-b - sqrt(dlt)) / 2 / a;
	printf("x1=%lf x2=%lf\n", x1, x2);
	return 0;
}