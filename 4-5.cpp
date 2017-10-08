// 4-5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>

int main()
{ 
	int a,b,c;
	c=10;
	for (a=1;a<=99;a++)
	{
		if (a==c)
			c*=10;
		b=a*a;
		if(b%c==a)
			printf("%ld\t%ld\n",a,b);
	}
	system("PAUSE");
	return 0;
}

