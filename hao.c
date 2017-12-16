#include <stdio.h>
#include <math.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		int n=0;
		int m,z=a;
		for(int j=0;;j++)
		{
		
			m=z%b;
			z=z/b;
			n=10*n+m;
				if(z==0)
			{
			break;
			}
			
		}
	//	printf("%d\n",n);
		
	
	int s;
	int c1=n;
	int n1;
	int d1=0;
	for(int p=0;;p++)
	{   	n1=c1%10;
	        c1=c1/10;
	
		d1=d1*10+n1;
		if(c1==0){
			break;
		}
		
	}printf("%d\n",d1);//别忘换行 
	}
}
