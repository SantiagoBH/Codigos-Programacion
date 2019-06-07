#include <stdio.h>
#include <stdlib.h>

void division();
void direccion(p);
void arreglo();
void replace();
void contador();
void Funcion();

int main()
{
    int a[5];
    int i,*p;

    p=&a[i];
    for(i=0;i<5;i++)
    {
        p=&a[i];
        printf("Posicion %d: %p\n",i,p+i);
    }

    p=&a[0];
    printf("\nPosicion 0: %p\n\n",p);

    division();
    direccion();
    arreglo();
    //replace();
    contador();
    //Funcion();

    return 0;
}

void division()
{
    float b,c,res;
    printf("Numero 1: ");
    scanf("%f",&b);
    printf("Numero 2: ");
    scanf("%f",&c);
    res=b/c;
    printf("%.2f",res);
}

void direccion()
{
    char txt[20];
    fflush(stdin);

    printf("\n\nElemento: ");
    gets(txt);
    printf("Posicion: %p\n",&txt);
    printf("El elemento es: ");
    puts(txt);
}

void arreglo()
{
    int i;
    int num;
    int *f;
    printf("\n\nCuantos numeros: ");
    scanf("%d",&num);

    for(i=0;i<num;i++)
    {
        printf("Posicion %d: %p\n",i,&f+i);
    }
    for(i=0;i<num;i++)
    {
        printf("\nValor %d: %p",i,f);
    }
}

void contador()
{
    char txt[30];
    char abe;
    fflush(stdin);
    printf("\n\nFrase: ");
    gets(txt);

}
//void replace()
//{
//    char *pal[25];
//    char buscar, reemplazar;
//
//    printf("\nPalabra: ");
//    gets(pal);
//    printf("\nLetra a buscar: ");
//    gets(buscar);
//    printf("\nLetra a reemplazar: ");
//    gets(reemplazar);
//}

//void Funcion()
//{
//    float a[];
//    float b[];
//    float c[];
//    int *cant;
//
//    cant=(int *)malloc(n*sizeof(int))
//
//}
