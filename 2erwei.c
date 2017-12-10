#include <stdio.h>
#include <math.h>
#include <string.h>
int main (){
	char str[6][9]=
	{
'-','-','*','*','-','*','*','-','-',
'-','*','-','-','*','-','-','*','-',
'-','*','-','-','-','-','-','*','-',
'-','-','*','-','-','-','*','-','-',
'-','-','-','*','-','*','-','-','-',
'-','-','-','-','*','-','-','-','-'
};

//printf("%c",str[1][1]);
	int x,y,w,h;
	scanf("%d%d%d%d",&y,&x,&w,&h);
	if(y>9||y<1||x<1||x>6||w<1||w>9||h<1||h>6)
{
		printf("Input Error\n");
		return 0;}
if(!(y+w>=2 && y+w<=10) || !(x+h>=2 && x+h<=7)) 
	{printf("Input Error\n");
	return 0;
	}
	
	
	
	else 
	{
		for(int i=x;i<x+h;i++)
		
	{
			
			for(int j=y;j<y+w;j++)
			
		  {
        printf("%c",str[i-1][j-1]);		  	
		  
		  }printf("\n");}
		
	}
	}
	
