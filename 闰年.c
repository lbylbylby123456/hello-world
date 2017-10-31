#include <stdio.h> 
#include <math.h>
int main (){
float a;
	int b;
	 float c;
	  int  d;
	float e;
	  int f;
   float g;
	scanf("%f",&a);
	b=a/400;
	c=a/400;
	d=a/4;
	e=a/4;
	f=a/100;
	g=a/100;
	if (fabs(c-b)<0.00001)
	printf("%f是闰年",a);
	else if ((fabs(b-c)>0.00001)&&(fabs(d-e)<0.00001)&&(fabs(f-g)>0.00001))
	printf("%f是闰年",a);
	else 
	printf("%f不是闰年",a);
	return 0;
	
}
