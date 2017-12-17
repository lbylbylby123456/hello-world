#include<stdio.h>
int main()
{
int a[10],n,i;
scanf("%d",&n);
n=n%10;
for(i=0;i<n;i++)
scanf("%d",&a[10-n+i]);
for(i=0;i<10-n;i++)
scanf("%d",&a[i]);
for(i=0;i<10;i++)
printf("%d ",a[i]);
puts("");
return 0;
}
