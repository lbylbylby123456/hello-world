#include <stdio.h>
int main (){
	//ax+by=m;
	//cx+dy=n;
	//x=(dm-bn)/(ad-bc);
	//y=(cm-an)/(bc-ad);
	double a,b,c,d,m,n,x,y;
	printf("请输入xy前面的系数和mn的值\n");
	scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&m,&n);
	x=(m*d-b*n)/(a*d-b*c);
    y=(m*c-a*n)/(b*c-a*d);
    printf("x=%lf,y=%lf\n",x,y);
}
 
