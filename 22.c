#include <stdio.h>
#include <math.h>
int main (){
	char hex1[6];
	scanf("%s",&hex1);
	int sum=0;
	int c;
	for(int i=2;i<6;i++)
	{   		
	             
		c=hex1[i]>='a'?(hex1[i]-87):(hex1[i]-48);
	
            sum=16*sum+c;
	}
	    printf("%d",sum);
}
