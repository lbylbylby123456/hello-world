#include <stdio.h>
#include <math.h>
int main() 
{
	int k,x;
	scanf("%d",&k);
	for(int i=0;i<k;i++)
	{
		scanf("%d",&x);
		
		int n=sqrt(x);
		int c=x;
		for(int j=2;j<n;j++)
		{
			int p;
			if (c%j==0)
			{   
				int c=c/j;
				for(p=1;;p++)
				{  c=c/j;
				if(c/j!=0)
				break;
				}
				
				
			
			for(int l=0;l<p;l++)
		    {
			printf("%d",j);
			printf("*");
			}
			
			if(c==1)
			break;
		
		}
		
	} 
}
}
