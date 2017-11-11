#include <stdio.h>
int main() {
	int a=2111;
	int b=1211;
	int c=1121;
int i,j,m;
	
	for (i=2;i<a;i++)
 	  for (j=2;j<b;j++)
 	    for (m=2;m<c;m++)
	 {
 float	x=a % i;
 float	y=b % j;
 float  z=c % m;
   	if(x==0) {
	 break;
	 }
	 if(y==0) {
	 break;
	 }
	 if(z==0) {
	 break;
	 }
}
int p=0;int w1=0;
if (i==a){
 p=p+1;w1=2111;
printf("2111是超级素数\n"); }
if (j==b)
{p=p+1;w1=w1+1211; 
printf("1211是超级素数\n");} 
if (m==c)
{p=p+1; w1=w1+1121;
printf("1121是超级素数\n"); }


printf("共有%d个超级素数\n",p);
printf("超级素数的和为%d\n",w1);
if (i==a)
printf("2111是最大的超级素数\n") ;}
