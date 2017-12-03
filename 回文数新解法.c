#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main (){
	int x;
	scanf("%d",&x);
int m;
int sum=0;
m=x;
for (int i=0;i<1000;i++){
	sum=sum*10+m%10;
	m=m/10;
	if( m==0)
	break;
	
}
if(sum==x)
printf("Yes");
else printf("No");
}
