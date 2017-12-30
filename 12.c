#include<stdio.h>
int main()
{
	int a[20],m,k,i,x,y,t,n;
	scanf("%d",&n);
	while(n--)
	{
	scanf("%d%d",&m,&k);
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	for(x=0;x<m;x++)
	{for(y=0;y<m;y++)
		{if(a[y]<a[y+1])
				{	t=a[y];
					a[y]=a[y+1];
					a[y+1]=t;
				}
		}
	}
	if(a[k-1]==a[k]||k>m)
		printf("error\n");
	else
		printf("%d\n",a[k-1]);
	}
	return 0;
}
