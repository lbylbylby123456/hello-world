#include <stdio.h>
void swap(int *a,int *b); 
int main()
{   int *a,*b,c,d;
char *sa="0123456";
char sb[8]="0123456";
*(sa+5) == sb[0]
	scanf("%d%d",&c,&d);
	a=&c;
	b=&d;
	swap(a,b);
	printf("%d %d",*a,*b);
	printf("%d %d",c,d);
	return 0;
 }
 void swap(int* pa,int* pb)
 {
 	int e=*pa;
 	*pa=*pb;
 	*pb=e;
 	int **ppa=&pa; 
 }
 
