#include <stdio.h>
#define PI 3
#define Q(n2) (n2>0?n2:-n2)
#define M(n3,n4) (n3>n4?n3:n4)
#define N(n5,n6,n7) (n5>n6?(n5>n7?n5:n7):(n6>n7?n6:n7))
int main(){
	int n1,n2,n3,n4,n5,n6,n7,a,b,c,d;
	scanf("%d%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6,&n7);
	a=PI*n1*n1;
	b=Q(n2);
	c=M(n3,n4);
	d=N(n5,n6,n7);
	printf("%d\n%d\n%d\n%d\n",a,b,c,d);
	return 0;
	
} 
