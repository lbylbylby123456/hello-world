#include<stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){//要用循环 
for(int i=0;;i++)
{

	int a=i;
	int b=a+100;
	int c=a+268;
	int x=sqrt(b);
	int y=sqrt(c);
	if(x*x==b&&y*y==c)
	{
		printf("%d\n",a);
	}
}
	return 0;
} 
