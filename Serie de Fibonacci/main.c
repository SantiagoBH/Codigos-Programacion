#include <stdio.h>
#include <stdlib.h>


int sumar(int num1,int num2);            //Declaramos el prototipo de la funcion "sumar".
void fibonacci();                        //Declaramos el prototipo de la funcion "fibonacci".
void  posicion();                        //Declaramos el prototipo de la funcion "posicion".
int main()
{
    char operacion;           //Declaramos las variables que vamos a utilizar.
    int num1,num2,Rsuma;
    int i,actual;

    printf("Seleccione una opcion:\n1.Suma\n2.Serie de fibonacci\n3.Posicion\n\n");
    scanf("%c",&operacion);

    switch(operacion)                        //Se elige cual es el caso que se va utilizar.
    {
    case '1':                                //El caso 1 es una suma.

        printf("Ingrese numero: ");
        scanf("%d",&num1);

        printf("Ingrese otro numero: ");
        scanf("%d",&num2);

        Rsuma = sumar(num1,num2);            //Llamamos la funcion de sumar.
        printf("Resultado: %d",Rsuma);
        break;

    case '2':                                //El caso 2 es la serie de fibonacci.
        printf("\n\nSerie de fibonacci:\n");

        fibonacci();                         //La funcion de fibonacci no retorna.
        break;

    case '3':
        posicion();                          //La funcion de posicion no retorna.
        break;
    }

    return 0;
}
int sumar(int num1,int num2)    //Declaramos en la funcion cuales son los datos de entrada.
{
    int Rsuma;
    Rsuma=num1+num2;

    return Rsuma;              //Retornamos la variable de Rsuma.
}

void fibonacci()                //Funcion no tiene datos de entrada y sin retorno.
{
    int act[20];
    int ant,trasn,i;
    ant=1;
    trasn=0;

    printf("1 ");
    for(i=0;i<19;i++)
    {
    act[i]=ant+trasn;          //Operacion para obtener la serie de fibonacci.
    trasn=ant;
    ant=act[i];

    printf("%d ",act[i]);      //Imprimir los valores.
    }
}

void  posicion()    //Funcion sin datos de entrada y sin retorno.
{
    int act[20];
    int ant,trasn,pos;
    ant=1;
    trasn=0;

    printf("1 ");
    for(int i=1;i<20;i++)
    {
        act[i]=ant+trasn;
        trasn=ant;
        ant=act[i];

        printf("%d ",act[i]);
    }
    printf("\nIngrese numero: ");       //Numero que pertenece a la serie.
    scanf("%d",&pos);

    for(int i=1;i<20;i++)
    {
        if( pos  == act[i] )            //Pos va a ser igual a los numeros de la serie.
        printf("\nPosicion: %d",i);     //Imprime la posicion del numero ingresado.

    }
}
