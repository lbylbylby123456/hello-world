#include <stdio.h>
int main(){
	int a[100][100];//zheyouwentima
	int n,m;
	int i,j;
	int add=0;
	scanf("%d%d",&n,&m);
	int flag=1;
	for( i=0;i<n;i++)
	   for(int j=0;j<m;j++){//j<m!!!!!
		   scanf("%d",&a[i][j]); }//zhuyixiannongwan
	for(int i=0;i<n;i++)
	      for( j=0;j<m;j++) {  	
		   for(int j1=1;j1<m;j1++)
	   		if(a[i][j1]>a[i][j]) flag=0;
	   	   for(int i1=1;i1<n;i1++)
			if(a[i1][j]<a[i][j]) flag=0;
		   if(flag==1){
		   	printf("a[%d][%d]=%d",i,j,a[i][j]);
			   add=add+1;}
		   }
		   
	   if(add==0)
	   printf("No\n");
		else   
		printf("\n");
	
		
	
	
}
