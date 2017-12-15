#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
/*输入的第一行包含两个整数N, K。
接下来K行，每行三个整数w, s, c，
分别表示一位老师要使用的钥匙编号、开始上课的时间和上课的时长。
可能有多位老师使用同一把钥匙，但是老师使用钥匙的时间不会重叠。
保证输入数据满足输入格式，你不用检查数据合法性。*/
int main(){
	int n,k,j;
	scanf("%d%d",&n,&k);
	int z[2333],s[2333],c[2333],w[2333];
	int b1; 
	for(j=1;j<n;j++){
		w[j]=j;
		}
	for( b1=1;b1<k+1;b1++){
		scanf("%d%d%d",&w[b1],&s[b1],&c[b1]);
		
	for(int i=1;i<k;i++){
	if(w[i]<w[i+1]&&c[i]+s[i]>s[i+1]&&c[i]+s[i]<c[i+1]+s[i+1])
		{
			int a;
			w[i]=a;
			w[i]=w[i+1];
			w[i+1]=a;
		}
	if(w[i]>w[i+1]&&c[i]+s[i]<s[i+1]&&c[i]+s[i]>c[i+1]+s[i+1])
			{
			int a;
			w[i]=a;
			w[i]=w[i+1];
			w[i+1]=a;
		}
	
		
		
}
for(int j=1;j<n+1;j++){

	printf("%d ",w[j]);
}
