//河北传媒学院_程序设计基础_P75实战训练按格式输出平方立方_11_13_Deng
#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	printf("请输入一个整数");
//	scanf("%d", &a);
//	b = a * a;
//	c = b * a;
//	printf("n             n平方           n立方\n");
//	printf("%d             %d               %d\n", a, b, c);
//	return 0;
//}
#include <stdio.h>
int main()
{
	int a;
	printf("请输入一个表示ASCII值的整数：\n");
	scanf("%d", &a);
	printf("%d所对应的字符为%c", a, a);
	return 0;
}