#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num,a;

    printf("Ingrese numero: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        a=(i*(i+1)/2);
    }
    printf("%d",a);

    return 0;
}
