#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int n;
	
	scanf("%d",&n);
	int a[2333]; 
	for(int i=0;i<n/8;i++){
     scanf("%d",a[i]);
  }	
  for(int i=0;i<n/8;i++){
  	int sum=0,sum2=0,sum3=0;
  int m[2333];
  	int c[2333];//问 intc8不行吗 
  	for(int v=8;v>0;v--){
  		c[8]=128;
		   c[v-1]=c[v]/2;
  		m[v]=a[i]/c[v];
	  }
	  int j;
	  for( j=8;j>0;j--){
	  if(m[j]==0){
	  	sum=sum+1;
	  }if(m[j]==1){
	  	break;
	  }
	  }
	  int p;
	   for(p=j;p>0;p--){
	  if(m[p]==1){
	  	sum2=sum2+1;
	  }if(m[p]==0){
	  	break;
	  }
	  }
	  for(int w=p;w>0;w--){
	  if(m[w]==0){
	  	sum3=sum3+1;
	  }if(m[w]==1){
	  	break;
	  }
	  }
	  if(sum!=0)
	  printf("%d",sum);
	  if(sum2!=0)
	  printf("%d",sum2+128);
	  if(sum3!=0)
	  printf("%d",sum3); 
  
 /* int m1,m2,m3,m4,m5,m6,m7,m8,n1,n2,n3,n4,n5,n6,n7,n8;
  m8=a[i]/128;
  n8=a[i]%128; 
   m7=n8/64;
  n7=n8%64;
  m6=n7/32;
  n6=n7%32;
  m5=n6/16;
  n5=n6%16;
  m4=n5/8;
  n4=n5%8;
  m3=n4/4;
  n3=n4%4;
  m2=n3/2;
  n2=n3%2;
  m1=n2;
  */
}
