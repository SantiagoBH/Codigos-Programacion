#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,num,a;
    x=1;

    printf("Ingrese numero: ");
    scanf("%d",&num);

    for(int i=1;i<=num;i++,x+=2)
    {
        printf("%d ",x);
    }
    a=num*num;
    printf("\nResultado: ");
    printf("%d",a);

    return 0;
}
