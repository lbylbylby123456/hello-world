#include<stdio.h>

int main()
{
	struct
	{
		char name[20];
		int id;
		int math;
		int chin;
		int sum;
	}s[101];
	int n,i,t=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d%d%d",&s[i].name,&s[i].id,&s[i].math,&s[i].chin);
		s[i].sum=s[i].math+s[i].chin;
	}
	while(t)
	{
		t=0;
		for(i=0;i<n-1;i++)
		{
			if(s[i].sum>s[i+1].sum)
				;
			else if(s[i].sum==s[i+1].sum)
			{
				if(s[i].id>s[i+1].id)
				{
					s[101]=s[i];
					s[i]=s[i+1];
					s[i+1]=s[101];
					t=1;
				}
			}
			else
				{
					s[101]=s[i];
					s[i]=s[i+1];
					s[i+1]=s[101];
					t=1;			
				}
		}
	}
