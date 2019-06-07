#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[]={2,4,6,8};
    int b[]={1,2,3,5};
    int c[8];
    int i;

    for(i=0;i<4;i++)
    {
        c[i]=a[i];
    }
    for(i=4;i<8;i++)
    {
        c[i]=b[i-4];
    }
    for(i=0;i<8;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}
