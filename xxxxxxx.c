#include<stdio.h>

int main()
{
	char a[1000], c;
	int i,n=1;
	gets(a);
	while(n)
	{
		n=0;
		for(i=0;a[i+1]!='\0';i++)
		{
			if(a[i]>a[i+1])
			{
				c=a[i];
				a[i]=a[i+1];
				a[i+1]=c;
				n=1;
			}
		}
	}
	for(i=0;a[i]!='\0';i++)
		printf("%c",a[i]);
	puts("");
	return 0;
}
