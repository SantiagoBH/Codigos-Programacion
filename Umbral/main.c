#include <stdio.h>
#include <stdlib.h>

void umbral(u);                  //Declaramos el prototipo "umbral".
int main()
{
    int u;                       //Declaramos las variables que vamos a utilizar.
    printf("Ingrese umbral: ");  //El umbral es el numero maximo que puede tener.
    scanf("%d",&u);

    umbral(u);                   //Declaramos la funcion.

    return 0;
}

void umbral(int u)              //Funcion con datos de entrada y sin retorno.
{
    int i,cant;                 //Declaramos las variables que vamos a utilizar.
    float num[5];

    printf("\n");
    for(i=0,cant=0;i<5;i++)
    {
        printf("Ingrese numero [%d]: ",++cant);      //Ingresamos los numeros reales.
        scanf("%f",&num[i]);

    do
    {
        if(num[i]>u)             //Una condicion si uno de los numeros ingresados es mayor al umbral.
        {
            num[i]/=2;           //Lo divide dos.
        }
    }while(num[i]>u);            //Se repite este condicion hasta que el numero sea menor que el umbral.
    }
    for(i=0,cant=0;i<5;i++)
    {
        printf("\nValor [%d]: ",++cant);
        printf("%f",num[i]);     //Nos imprime el valor de los numeros.

    }
}

