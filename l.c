#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
int n;
int sum=0;
scanf("%d",&n);
for(int i=0;i<n;i++)
{  int m;
   scanf("%d",&m);
   	int k;
   	scanf("%d",&k);
   	int a[1000];
   for(int j=0;j<m;j++)
   {
   scanf("%d",&a[j]);
   }
   int b; 
   for(int t=0;t<k-1;t++)
   {
       b=a[0];
    for(int j=0;j<m;j++)
	{
      if(a[j]>b)
      {
      	b=a[j];
	  }
		
	}
	for(int j=0;j<m;j++)
    {
	  if(a[j]==b)
		a[j]=0;
    }
   
   
   }  b=a[0];
   for(int j=0;j<m;j++)
	{
      if(a[j]>b)
      {
      	b=a[j];
	  }
}

if(b==0)printf("error");
   else printf("%d",b);
printf("\n");	

}
}
