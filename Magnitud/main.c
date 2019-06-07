#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,N[3];
    float magnitud;

    for(i=0;i<3;i++)
    {
        printf("Ingrese valor: ");
        scanf("%d",&N[i]);
    }
    magnitud=sqrt((N[0]*N[0])+(N[1]*N[1])+(N[2]*N[2]));
    printf("%f",magnitud);

    return 0;
}
