#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num,suma;
    suma=0;

    printf("Ingrese numero: ");
    scanf("%d",&num);

    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            suma+=i;
            printf("%d ",i);
        }
    }
    if(num==suma)
        {
            printf("\nNumero perfecto");
        }else if(num!=suma){
            printf("\nNumero no perfecto");
        }
    return 0;
}
