#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m,i=0;
    for(i;i<n;i++)
    {
        int m,j=0;
        scanf("%d",&m);
        int a[m];
        for(j;j<m;j++)
        {
            scanf("%d",&a[j]);
        }
        int p,q=0,b;
        for(q;q<m;q++)
        {   p=0;
            for(p;p<m-1;p++)
            {
                if(a[p]>a[p+1])
                {
                    b=a[p];
                    a[p]=a[p+1];
                    a[p+1]=b;
                }
            }
        }
        int k=1,k1=0;
        for(k;k<m;k++)
        {
            if(a[0]!=a[k])
            {
                break;
            }
        }
        k--;
        int m1=k;
        int x=0;
        int c[m-m1];
        for(k;k<m;k++)
        {
            c[x]=a[k];
            x++;
        }
        if(m1==m-1)
        {
            printf("ERROR\n");
        }
        else
        {
            printf("%d\n",c[1]);
        }
    }
    return 0;
}
