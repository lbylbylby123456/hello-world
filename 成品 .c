#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main (){
	double a,b,c,d,m,n;
	scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&m,&n);
	if((a*d==b*c && a*n==c*m) || (a*d==b*c && b*n==d*m))
	{
	printf("有无穷多解\n");
    }
    else if((a*d==b*c && a*n!=c*m) || (a*d==b*c && b*n!=d*m))
    {
    printf("无解\n");
	}
	else
	{
	printf("x=%lf\n,y=%lf\n",(d*m-b*n)/(a*d-b*c),(c*m-a*n)/(b*c-a*d));
	}
	system ("pause");
	return 0;
}
