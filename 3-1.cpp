// 3-1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream.h>


{/*
  ����������ֵĵ���
 */

void main()
{
  int m,n;
  cout<<"Enter n:";
  cin>>n;
  while (n!=0) {
    m=n%10;
    cout<<m;
    n/=10;
    }
  putchar('\n');
}


/*
  3.1��ҵ
*/
#include <stdio.h>
int main (void)
{
  int a,i;
  i=0
  printf ("������һ��С��10000������:");
  scanf("%d",&a);
  
  while (a<10){
    a/=10;
    i=i+1��
  }
  printf��"/n");
  switch(i)
      case 0: puts ("����С��10��"��;                   break��
      case 1: puts ("��������10С�ڵ���99��"��;       break��
      case 2: puts ("��������100С�ڵ���999"��;        break��
      case 3: puts ("��������1000С�ڵ���9999��"��;    break��
 }

	return 0;
}

