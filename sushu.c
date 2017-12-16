#include <stdio.h>
#include <math.h>
int main (){
	int o;
	scanf("%d",&o);
	for(int i=1;i<=o;i++)
	{   int n;
		scanf("%d",&n);
		for(int j=1;j<=n;j++)
		{int k;
			for( k=2;k<=j;k++)//不要写成一 
			{if(j%k==0)//不要写反 
			break;
			}
			if(k==j)
			printf("%d ",j);
		}
		printf("\n");
	}
} 
