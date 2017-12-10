#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int n;
	int k,m;
    scanf("%d",&n);
	
		int a[222222];
	for(int i=0;i<n;i++){
		
		scanf("%d",a[i]);}
	k=a[0];
	m=a[0];
    for(int i=1;i<n;i++){
    	
		if(a[i]>k)
    	k=a[i];
	}
	for(int i=1;i<n;i++){
    	
		if(a[i]<m)
    	m=a[i];
	}
	printf("%d %d",k,m);
} 
	
