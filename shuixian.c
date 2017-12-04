#include<stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
	int a,b,c;
	for(int i=100;i<1000;i++){//
		a=i/100;
		b=(i-100*a)/10;//b=i/10%10
		c=i-100*a-10*b;//c=i%10;
	
	if(a*a*a+b*b*b+c*c*c==i)
	printf("%d\n",i);
	}return 0;
}
