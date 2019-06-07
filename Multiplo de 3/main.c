#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,suma,b,c;
    suma=44;

    for(i=1;i<suma;i++)
    {
        b=i%3;
        if(b==0)
            c=i++;
            printf("%d ",i);
    }
    return 0;
}
