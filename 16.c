
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define PI 3
#define _Area(x) PI*(x)*(x)
#define _Abs(x) (x)>=0?(x):(-x)
#define _Max2(x,y) (x)>(y)?(x):(y)
#define _Max3(x,y,z) (x)>(y) && (x)>(z) ? (x) : ((y)>(z)?(y):(z))

int main()
{
	int a,b,c;
	scanf("%d",&a);
	printf("%d\n",_Area(a));
	scanf("%d",&a);
	printf("%d\n",_Abs(a));
	scanf("%d %d",&a,&b);
	printf("%d\n",_Max2(a,b));
	scanf("%d %d %d",&a,&b,&c);
	printf("%d\n",_Max3(a,b,c));
	return 0;
}
