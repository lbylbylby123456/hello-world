#include<stdio.h>
int main(void)
{
int x;
int a,b,c;
int n;
int flag=0;
scanf("%d",&n);
while(n--)
{
scanf("%d%d%d",&a,&b,&c);
for(x=1000;x<10000;x++)
{
if(x%a==0&&(x+1)%b==0&&(x+2)%c==0)
{
printf("%d\n",x);
flag++;
}
}
if(flag==1)
printf("Impossible\n");
}
return 0;
}
