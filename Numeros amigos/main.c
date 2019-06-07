#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,sum1,sum2,i;
    sum1=0;
    sum2=0;

    printf("Ingrese numero: ");
    scanf("%d",&num1);
    for(i=1;i<=num1/2;i++)
    {
        if(num1%i==0)
        {
            printf("%d ",i);
            sum1+=i;
        }
    }
    printf("%d",num1);
    printf("\nsuma: %d",sum1);

    printf("\nIngrese otro numero: ");
    scanf("%d",&num2);


    for(i=1;i<=num2/2;i++)
    {
        if(num2%i==0)
        {
            printf("%d ",i);
            sum2+=i;
        }
    }
    printf("%d",num2);
    printf("\nSuma: %d",sum2);

    if(sum1==num2&&sum2==num1)
    {
        printf("\nNumeros amigos");
    }else{
        printf("\nNo son numeros amigos");
    }

    return 0;
}
