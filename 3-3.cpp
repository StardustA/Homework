// 3-3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>

int main (void)
{ int n;
  printf("plese enter a number:");
  scanf("%d",&n);
  if(n%3==0||n%7==0)
	  printf("yes");
  else
	  printf("no");
  
	return 0;
}

