#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ant,tras,actual,i,num;

    actual=1;
    ant=1;
    tras=0;

    printf("Ingrese numero: ");
    scanf("%d",&num);

    printf("1 ");
    for(i=1;i<num;i++)
    {
        actual=ant+tras;
        tras=ant;
        ant=actual;
        printf("%d ",actual);
    }
    return 0;
}
