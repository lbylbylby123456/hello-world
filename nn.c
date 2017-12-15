#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	long long  x1,y1,z1,r1,x2,y2,z2,r2,x,y,z;
	for(int i=0;i<n;i++){
		scanf("%lld%lld%lld%lld",&x1,&y1,&z1,&r1);
		scanf("%lld%lld%lld%lld",&x2,&y2,&z2,&r2);
		scanf("%lld%lld%lld",&x,&y,&z);
     //不要再加一个for循环了 要学会领悟意思 
	   long long  a = 2*(x2-x1),b = 2*(y2-y1),c = 2*(z2-z1);
       long long  k = r1*r1-r2*r2+x2*x2-x1*x1+y2*y2-y1*y1+z2*z2-z1*z1;
        long long tmpz = k - a*x-b*y; 
        if(c*z==tmpz)
	printf("No\n");
	else
	printf("Yes\n"); 
	}

} 
