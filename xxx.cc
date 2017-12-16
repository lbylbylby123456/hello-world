#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


struct Singer
{
	int num;
	double ave;
	double score[6];
	char visited;
};

int main()
{
	struct Singer singer[10];
	int i,j;
	for(i=0;i<10;i++)
	{
		singer[i].num=i+1;
		singer[i].ave=0.0;
		singer[i].visited=0;
		for(j=0;j<6;j++)
		{
			scanf("%lf",&singer[i].score[j]);
			singer[i].ave+=singer[i].score[j];
		}
		singer[i].ave/=6.0;
	}
	double max;
	int maxi;
	for(i=0;i<10;i++)
	{
		max=-1.0;
		maxi=-1;
		for(j=0;j<10;j++)
		{
			if(singer[j].visited)continue;		
			if(singer[j].ave>max)
			{
				max=singer[j].ave;
				maxi=j;
			}
		}
		singer[maxi].visited=1;
		printf("%d %.2lf",singer[maxi].num,singer[maxi].ave);
		if(i<9)printf("\n");
	}
	return 0;} 
