#include <stdio.h>
int main(){
	int sum,i,j,k,lens1,lens2;
	char str1[2333];
	char str2[2333];
	lens1=0;lens2=0;
	while((str1[lens1++]=getchar())!='\n');
	while((str2[lens2++]=getchar())!='\n');
lens1--;lens2--;
sum=0;
for(i=0;i<=lens1-lens2;i++)
{
	k=1;
	if(str1[i]==str2[0]){
		k=0;
		for(j=0;j<=lens2-1;j++)
		if(str1[i+j]!=str2[j])
		k=1;
		
	}if(k==0) sum++;
}
printf("%d\n",sum);

}
