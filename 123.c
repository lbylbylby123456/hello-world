#include<stdio.h>
int main()
{
	int m,n,i,x;
	scanf("%d",&x);
	while(x--)
	{
	scanf("%d",&i);
	for(m=1;m<=i;m++)
	{
	n=m;
	while(m%2==0)
		m/=2;
	while(m%3==0)
		m/=3;
	while(m%5==0)
		m/=5;
	if(m==1)
		printf("%d ",n);
	m=n;
	}
	printf("\n");
	}
	return 0;
