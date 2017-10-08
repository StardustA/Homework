/*
3-6
*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int r, k;
	double s，c；
	printf("请输入r值：")； scanf("%d",&r);
	printf("请输入k值：")； scanf("%d", &k);
	s = 3.14*r*r;
	c = 2 * 3.14*r;
	switch (k)
		case 1:printf("圆的面积为%f。/n"，k);         break;
		case 2:printf("圆的周长为%f。/n"，c);         break;
		case 3:printf("圆的面积为%f周长为%f。/n,c,k); break;
system("PAUSE");
			return 0；

}