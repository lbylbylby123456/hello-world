#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
	char a[2333];
	char b[2333];
	scanf("%s",a);
    scanf("%s",b);
     int sum=0;
    int len1=strlen(a);
    int len2=strlen(b);
    for(int i=0;i<len1;i++)
    {
    	if(a[i]==b[0])
    	{
    		for(int j=0;j<len2;j++)
    		{
    			if(a[i+j]==b[j]) sum=sum+1;//！！！ 
    			if(i+j==len1||a[i+j]!=b[j])break;
			}
			if(sum==len2) printf("YES");
			else printf("NO");
		}
	}
}
