#include <stdio.h>
int a;
int main(){

double b,c;
printf("请输入c");
scanf ("%lf",&c);
printf("这个小数是:%lf",c);
a=c;                
b=c-a;
printf("%lf的整数部分是:%d,小数部分是:%lf\n",c,a,b);
return 0;                             
}
