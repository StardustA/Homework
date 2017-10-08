/*
计算三角形面积
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
	int a,b,c,s,p;
	printf("请输入整数1：")；scanf("%d", &a);
	printf("请输入整数2：")；scanf("%d", &b);
	printf("请输入整数3：")；scanf("%d", &c);
	p = (a + b + c) / 2;
	s = sqrt(p*(p - a)*(p - b)*(p - c));
	printf("三角形面积为%d。\n", s);
	return 0


}