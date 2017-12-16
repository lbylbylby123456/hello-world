#include <stdio.h>
#include <math.h>
int main (){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	int a,b;
	scanf("%d%d",&a,&b);
	  for(int i=a;i>0;i--)
      {
      	 int x=a%i;
      	 int y=b%i;
      	 if(x==0&&y==0)
      	 {printf("%d\n",i);
      	 break;
		   }
	  }	
	  }
} 
