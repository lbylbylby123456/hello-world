#include<stdio.h>
int main()
{
char ch[100];
int a=0,b=0,c=0,d=0,i=0;
gets(ch);
while(ch[i]!='\0')
{
if(ch[i]>='A'&&ch[i]<='Z')a++;
else if(ch[i]>='a'&&ch[i]<='z')b++;
else if(ch[i]>='0'&& ch[i]<='9')c++;
else d++;
i++;
}
printf("%d %d %d %d",c,a,b,i);
return 0;
}
