/*
�������������
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
	int a,b,c,s,p;
	printf("����������1��")��scanf("%d", &a);
	printf("����������2��")��scanf("%d", &b);
	printf("����������3��")��scanf("%d", &c);
	p = (a + b + c) / 2;
	s = sqrt(p*(p - a)*(p - b)*(p - c));
	printf("���������Ϊ%d��\n", s);
	return 0


}