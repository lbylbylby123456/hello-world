#include <stdio.h>
#include <math.h>
int main(){
	double a;
	double b;
	double c;
	scanf("%lf",&c);
	b=modf(c,&a);
	printf("%lf可分为%lf和%lf\n",c,a,b);
	return 0;
