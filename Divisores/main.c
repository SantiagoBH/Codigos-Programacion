#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num;

    printf("Ingrese numero: ");
    scanf("%d",&num);

    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            printf("%d ",i);
        }
    }
    printf("%d",num);
    return 0;
}
