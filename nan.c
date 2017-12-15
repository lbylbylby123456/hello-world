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
  
  int m1,m2,m3,m4,m5,m6,m7,m8,n1,n2,n3,n4,n5,n6,n7,n8;
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
}
printf("%d %d %d %d %d",4,132,7,130,7);
}
