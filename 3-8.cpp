// 4-2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
int main (void)
{
	int a,b;
	printf("整数a和b的值：");
	scanf("%d%d",&a,&b);
	if(a%b){
		printf("yu为%d\n",a%b);
	}
	else{
		printf("商为%d\n,余数为%d\n,a/b,a%b");
	}
	return 0;
}
