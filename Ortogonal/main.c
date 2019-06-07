#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,V[3];
    int U[3];
    int ortogonal;

    for(i=0;i<3;i++)
    {
        printf("V1: ");
        scanf("%d",&V[i]);
    }

    printf("\n");
    for(i=0;i<3;i++)
    {
        printf("U1: ");
        scanf("%d",&U[i]);
    }
    ortogonal=(V[0]*U[0])+(V[1]*U[1])+(V[2]*U[2]);
    printf("\n%d",ortogonal);
    if(ortogonal==0)
    {
        printf(" Ortogonal");
    }else{
        printf(" No ortogonal");

    }
    return 0;
}
