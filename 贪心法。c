#include <stdio.h>

int main() {
	int n; 
    int a[100000];
	scanf("%d",&n);
	for(int i= 1; i < n+1 ;i++) 
	scanf("%d",&a[i]);

	for(int i = 1 ; i < n ; i++) //注意 

	{
		int min = i;
		 	for(int j = 1+i ; j < n+1 ; j++)//用一加i！！！！
		if(a[min] > a[j]) 
		{int tmp = a[min];
		a[min]=a[j];
		a[j]=tmp;
		}
		
		for(int j = 1 ; j < n+1 ; j++) 
		printf("%d ",a[j]);
		printf("\n");
	}
	}


