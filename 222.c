#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
	int n;
	scanf("%d",&n);
	getchar();
	
	for(int i=0;i<n;i++)
	{   char a[1000];
	    char b[1000];
	     
	 /*  for(len2=1;;len2++)
	   {
	   	scanf("%c",&a[len2]);
	   	if(a[len2]='\n') break;
	      b[len2]=a[len2]-'0';
	   }*/
	    gets(a);//别用scanf 
	   int len=strlen(a);
	 // printf("%d\n\n\n\n\n\n",len);
		   	int len2=0;
		for(int j=0;j<len;j++)
		{    if(a[j]!=' ')
		    {
			b[len2]=a[j]-'0';
			len2++;
			}	
		}
		
	    
	
	/*	for(int p=0;p<len2;p++)
		{
			printf("%d ",b[p]);
			
		}*/
		
		
		int c[1000];
		int d[1000];
		int len3=0;
	    int len4=0; 
		for(int j=0;j<len2;j++)
	    {    
		     
			if(b[j]%2!=0) c[len3++]=b[j];
		//	printf("%d\n\n\n ",b[2]); 
			if(b[j]%2==0) d[len4++]=b[j];
		}
	
		for(int k=0;k<len3-1;k++)
		   for(int j=k+1;j<len3;j++)
		{if (c[k]>c[j])
		 {int tem;
		 tem=c[k];
		 c[k]=c[j];
		 c[j]=tem;
		 }
			
		}
		for(int j=0;j<len3;j++)
		{
			printf("%d ",c[j]);
		}
		
		for(int k=0;k<len4-1;k++)
		   for(int j=k+1;j<len4;j++)
		{int tem;
		if (d[k]>d[j])
		 {
		 tem=d[k];
		 d[k]=d[j];
		 d[j]=tem;
		 }
			
		}
		for(int j=0;j<len4;j++)
		{
			printf("%d ",d[j]);
		}
		printf("\n");
	
        }
} 
