// 4-2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
int main (void)
{
	int a,b;
	printf("����a��b��ֵ��");
	scanf("%d%d",&a,&b);
	if(a%b){
		printf("yuΪ%d\n",a%b);
	}
	else{
		printf("��Ϊ%d\n,����Ϊ%d\n,a/b,a%b");
	}
	return 0;
}
