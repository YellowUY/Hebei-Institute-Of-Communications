//河北传媒学院_程序设计基础_P32实战训练求坐标中点_11_5_Deng
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double x1, x2, y1, y2,x3,y3;
	printf("请输入第一个点的横坐标");
	scanf("%lf", &x1);
	printf("请输入第一个点的纵坐标");
	scanf("%lf", &y1);
	printf("请输入第二个点的横坐标");
	scanf("%lf", &x2);
	printf("请输入第二个点的纵坐标");
	scanf("%lf", &y2);
	x3 = (x1 + x2) / 2;
	y3 = (y1 + y2) / 2;
	printf("两点的中点坐标为（%f,%f）",x3,y3);
	return 0;
}