#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
	int n;
	scanf("%d",&n);
	
   for(int i=0;i<n;i++)
   {
   int a;
   	int x=0;
   	scanf("%d",&a);
   	for(int j=2;j<a;j++)
   	{
   	   if(a%j==0)
		  {printf("no\n");// 注意大括号范围 
		  x=1;
		  break;}	
	}
      if(x==0)printf("yes\n");	
   }
} 
