#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,residuo,mcd;

    printf("Ingrese numero: ");
    scanf("%d",&num1);

    printf("Ingrese otro numero: ");
    scanf("%d",&num2);

    do
    {
        residuo=num1%num2;
        if(residuo!=0)
        {
            num1=num2;
            num2=residuo;
        }else{
            mcd=num2;
        }
    }
    while(residuo!=0);
        printf("MCD: %d",mcd);

    return 0;
}
