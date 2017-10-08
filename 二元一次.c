#include<stdio.h>
int main()
{
	//ax+by=m
	//cx+dy=n
	//x=(md-bn)/(ad-bc)
	//y=(mc-an)/(bc-ad)
	double a,b,c,d,m,n,x,y;
	scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&m,&n);
    x=(m*d-b*n)/(a*d-b*c);
    y=(m*c-a*n)/(b*c-a*d);
	printf("x=%lf y=%lf\n",x,y);
	system("pause");
	return 0; 
}
