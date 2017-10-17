#include<stdio.h>
int main(){
	double p=3.1415926;
	p=((int)(p*10000+0.5))/10000.0;
	printf("%4lf\n",p);
}
