#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10]={0};
	int m,n,p,q,x,y,i,t;
	scanf("%d%d%d%d",&m,&n,&p,&q);
	if(n!=p)
		printf("error\n");
	else
	{
		for(x=0;x<m;x++)
		{for(y=0;y<n;y++)
			scanf("%d",&a[x][y]);
		}
		for(x=0;x<p;x++)
		{for(y=0;y<q;y++)
			scanf("%d",&b[x][y]);
		}
		for(x=0;x<m;x++)
		{for(y=0;y<q;y++)
			for(i=0;i<n;i++)
				{c[x][y]=c[x][y]+a[x][i]*b[i][y];}
		}
		for(x=0;x<m;x++)
		{for(y=0;y<q;y++)
			{printf("%d ",c[x][y]);}
			if(y==q)
				printf("\n");
		}
	}
	return 0;
}
