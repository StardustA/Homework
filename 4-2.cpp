// 4-3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int n,t;
	t=1;
    for(n=2000;n<=3000;n=n+4) {
    if((n%4==0&&n%100!=0)||n%400==0){
	   printf("%d ",n);
	 }
	if(t%10==0){
		printf("\n");
 }
	t=t+1;
	}
	system("PAUSE");
	return 0;
}

