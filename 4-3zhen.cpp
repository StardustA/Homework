// 4-3zhen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
int main(void)
{
	int n,t,max;
	t=0;
	max=0;
	printf("qingshuruyigezhengzhengshu:");
	scanf("%d",&n);
	while (n!=1){
		if (n%2)
			n=n/2;
		else
			n=n*3+1;
		t=t+1;
		if(n>max);
		max=n;
	}
	printf("max");
	return 0;
}

