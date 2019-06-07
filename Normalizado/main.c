#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i;
    int N[3];
    float magnitud,valor;
    float norma[3];

    for(i=0;i<3;i++)
    {
        printf("Ingrese valor: ");
        scanf("%d",&N[i]);
    }
    magnitud=sqrt((N[0]*N[0])+(N[1]*N[1])+(N[2]*N[2]));
    printf("\nMagnitud: %f",magnitud);
    printf("\n");

    for(i=0;i<3;i++)
    {
        norma[i]=N[i]/magnitud;
        printf("\nNormalizado: %f",norma[i]);
    }
    valor=sqrt((norma[0]*norma[0])+(norma[1]*norma[1])+(norma[2]*norma[2]));
    printf("\n\nValor: %f",valor);

    return 0;
}
