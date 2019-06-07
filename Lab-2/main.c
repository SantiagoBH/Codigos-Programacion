/*Yeikool Andres Ballesteros Pineda.
  Santiago Benjumea Hurtado.
  Laboratorio No.2*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct videojuego{        //Estructura videojuego con 6 campos.
    char nombre[25];
    char categoria[15];
    int cantidad;
    int codigo;
    char consola[15];
    float precio;
};
void inventario(struct videojuego juego[], int cant);          //Prototipo de la funcion inventario.
void buscar(struct videojuego juego[], int cant);              //Prototipo de la funcion buscar.
void modificacion(struct videojuego juego[], int cant);        //Prototipo de la funcion modificacion.
void categoria(struct videojuego juego[], int cant);           //Prototipo de la funcion categoria.

int main()
{
    struct videojuego juego[10];
    char op;
    int cant,i;

    printf("Cantidad de juegos: ");             //Cantidad de datos que se van a ingresar.
    scanf("%d",&cant);
    for(i=1;i<=cant;i++)                        //Datos de la estructura.
    {
    printf("\nJuego %d",i);
    printf("\nNombre del juego: ");
    fflush(stdin);
    gets(juego[i].nombre);
    printf("Categoria del juego: ");
    gets(juego[i].categoria);
    printf("Cantidad: ");
    scanf("%d",& juego[i].cantidad);
    printf("Codigo: ");
    fflush(stdin);
    scanf("%d",& juego[i].codigo);
    printf("Consola: ");
    fflush(stdin);
    gets(juego[i].consola);
    printf("precio: ");
    scanf("%f",&juego[i].precio);
    fflush(stdin);
    }

    printf("\n\n1.Inventario\n2.Buscar\n3.Modificar existencia\n4.Categoria\n\n");    //Menu para operaciones.
    scanf("%c",&op);
    switch(op)
    {
        case'1':
        inventario(juego,i);
        break;

        case'2':
        buscar(juego,i);
        break;

        case'3':
        modificacion(juego,i);
        break;

        case'4':
        categoria(juego,i);
        break;
    }

    return 0;
}
void inventario(struct videojuego juego[], int cant)            //Funcion inventario con entrada de la estructura y sin retorno.
{
    int i;
    for(i=1;i<cant;i++)                            //Nos muestra todos los juegos que hemos ingresado.
    {
      printf("\njuego %d:", i);
      printf("\nNombre: ");
      puts(juego[i].nombre);
      printf("Categoria: ");
      puts(juego[i].categoria);
      printf("Cantidad: %d  \nCodigo: %d ", juego[i].cantidad , juego[i].codigo );
      printf("\nConsola: ");
      puts(juego[i].consola);
    printf("precio: %.3f \n\n  ", juego[i].precio);
    }
}

void buscar(struct videojuego juego[], int cant)        //Funcion buscar con entrada de la estructura y sin retorno.
{
    char ibuscar[20];
    int i,res;
    printf("Juego a buscar: ");                //Se busca el nombre del juego.
    fflush(stdin);
    gets(ibuscar);


    for(i=1;i<cant;i++)
    {
        res=strcmp(ibuscar,juego[i].nombre);             //Compara si el juego se encuentra en el inventario.
        if(res==0)                                       //Si el juego se encuentra en el inventario me muestra sus datos.
        {
          printf("\nJuego %d",i);
          printf("\nNombre: ");
          puts(juego[i].nombre);
          printf("Categoria: ");
          puts(juego[i].categoria);
          printf("Cantidad: %d  \nCodigo: %d ", juego[i].cantidad , juego[i].codigo );
          printf("\nConsola: ");
          puts(juego[i].consola);
          printf("precio: %.3f \n\n  ", juego[i].precio);
        }
    }
}

void modificacion(struct videojuego juego[], int cant)     //Funcion modificacion con entrada de la estructura y sin retorno.
{
    char icodigo;
    int i,res;

    for(i=1;i<cant;i++)                          //Mostrar el nombre de los juegos y el codigo que tienen.
    {
      printf("\n\nNombre: ");
      puts(juego[i].nombre);
      printf("Codigo: %d",juego[i].codigo);
    }
    printf("\n\nCodigo a buscar: ");             //Buscar un codigo de un juego.
    fflush(stdin);
    scanf("%d",&icodigo);

    for(i=1;i<cant;i++)
    {
        res=(juego[i].codigo%icodigo);             //Calcular cuales juegos tienen ese codigo.
        if(res==0)
        {
            printf("Cantidad: %d",juego[i].cantidad);        //muestra cual es la cantidad que queda en el inventario.

            printf("\n\nIngrese cantidad nueva: ");          //Cual es el nueva cantidad que va a quedar en el inventario.
            scanf("%d",&juego[i].cantidad);

            printf("El juego: ");                     //Mostrar cual es el nombre del juego que se le cambio la cantidad.
            puts(juego[i].nombre);
            printf("Cantidad nueva: ");               //Muestras cual es la cantidad nueva.
            printf("%d",juego[i].cantidad);
        }
    }
}

void categoria(struct videojuego juego[], int cant)           //Funcion categoria con entrada de la estructura y sin retorno.
{
    char icategoria[20];
    int i,res;

    printf("Categoria a buscar: ");                    //Buscar una categoria de un juego.
    fflush(stdin);
    gets(icategoria);

    for(i=1;i<cant;i++)
    {
        res=strcmp(icategoria,juego[i].categoria);       //Compara la categoria buscada con las que hay en el inventario.
        if(res==0)                                       //Si encuentra una coincidencia muestra cuales son los datos del juego.
        {
          printf("\nJuego %d",i);
          printf("\nNombre: ");
          puts(juego[i].nombre);
          printf("Categoria: ");
          puts(juego[i].categoria);
          printf("Cantidad: %d  \nCodigo: %d ", juego[i].cantidad , juego[i].codigo );
          printf("\nConsola: ");
          puts(juego[i].consola);
          printf("precio: %.3f \n\n  ", juego[i].precio);
        }
    }
}
