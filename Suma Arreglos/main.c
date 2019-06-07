#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int arreglo[4];
    int suma =0;

    for(i=0;i<4;i++)
    {
    printf("Ingrese arreglo: ");
    scanf("\n%d",&arreglo[i]);

        suma+=arreglo[i];
    }
    printf("%d",suma);


    return 0;
}
