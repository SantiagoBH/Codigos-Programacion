#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"

//struct pasajeros{
//    char nombre[30];
//    int cc;
//    int pasajes;
//};

void cargar();
void guardar();
void anadir();
void pasaje();
void gastar();

int main()
{
    struct pasajeros usuario[10];

    FILE *txt=fopen("config.txt","a");
    FILE *dat=fopen("datos.txt","a");

    int n,i,op;

    printf("Numero de pasajeros: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fflush(stdin);
        printf("\nUsuario %d ",i);
        printf("\nNombre: ");
        gets(usuario[i].nombre);
        printf("Identificacion: ");
        scanf("%d",&usuario[i].cc);
        printf("Cantidad de pasajes: ");
        scanf("%d",&usuario[i].pasajes);
    }

    fprintf(txt,"%d\n",n);
    fclose(txt);

    for(i=1;i<=n;i++)
    {
        fputs("Usuario ",dat);
        fputs("\nNombre: ",dat);
        fputs(usuario[i].nombre,dat);
        fputs("\nIdentificacion: ",dat);
        fprintf(dat,"%d\n",usuario[i].cc);
        fputs("Numero de pasajes: ",dat);
        fprintf(dat,"%d\n\n",usuario[i].pasajes);
    }
    fclose(dat);

    printf("\n\n1. Cargar base de datos\n2. Guardar base de datos\n3. Anadir usuario\n4. Anadir pasaje\n5. Gastar pasaje\n\n");
    scanf("%d",&op);

    switch(op)
    {
        case 1:
            cargar();
            break;

        case 2:
            guardar();
            break;

        case 3:
            anadir();
            break;

        case 4 :
            pasaje();
            break;

        case 5:
            gastar();
            break;

        default:
            printf("No es una opcion");
    };

    return 0;
}

//void cargar()
//{
//    char carac;
//     FILE *dat=fopen("datos.txt","rt");
//
//    if(dat==NULL)
//    {
//        printf("No se encontro archivo");
//        return 0;
//    }
//
//    while(feof(dat)==0)
//    {
//        carac=fgetc(dat);
//        printf("%c",carac);
//    }
//
//    fclose(dat);
//}
//
//void guardar(struct pasajeros usuario[], int n)
//{
//    FILE *dat=fopen("datos.txt","rt");
//
//    for(int i=1;i<=n;i++)
//    {
//        fputs("Usuario ",dat);
//        fputs("Nombre: ",dat);
//        fputs(usuario[i].nombre,dat);
//        fputs("\nIdentificacion: ",dat);
//        fprintf(dat,"%d\n",usuario[i].cc);
//        fputs("Numero de pasajes: ",dat);
//        fprintf(dat,"%d\n\n",usuario[i].pasajes);
//    }
//    printf("Se guardo la informacion");
//    fclose(dat);
//}
//
//void anadir(struct pasajeros usuario[])
//{
//    int i=0;
//
//    FILE *dat=fopen("datos.txt","a");
//
//    fflush(stdin);
//    printf("Usuario\n");
//    printf("Nombre: ");
//    gets(usuario[i].nombre);
//    printf("Identificacion: ");
//    scanf("%d",&usuario[i].cc);
//    printf("Numero de pasajes: ");
//    scanf("%d",&usuario[i].pasajes);
//
//    fputs("Usuario\n",dat);
//    fputs("Nombre: ",dat);
//    fputs(usuario[i].nombre,dat);
//    fputs("\nIdentificacion: ",dat);
//    fprintf(dat,"%d",usuario[i].cc);
//    fputs("\nNumero de pasajes: ",dat);
//    fprintf(dat,"%d\n\n",usuario[i].pasajes);
//}
//
//void pasaje(struct pasajeros usuario[], int n)
//{
//    int identificacion,pas,can;
//    FILE *dat=fopen("datos.txt","a");
//
//    fflush(stdin);
//    printf("Identificacion: ");
//    scanf("%d",&identificacion);
//
//    for(int i=1;i<=n;i++)
//    {
//        if(identificacion==usuario[i].cc)
//        {
//            fflush(stdin);
//            printf("Usuario\n");
//            printf("Nombre: ");
//            puts(usuario[i].nombre);
//            printf("Identificacion: ");
//            printf("%d",usuario[i].cc);
//            printf("\nNumero de pasajes: ");
//            printf("%d",usuario[i].pasajes);
//            printf("\n\nNumeros de pasajes que desea agregar: ");
//            scanf("%d",&pas);
//            can=usuario[i].pasajes+pas;
//            printf("El usuario %s tiene %d pasajes",usuario[i].nombre,can);
//
//            fputs("El usuario: ",dat);
//            fputs(usuario[i].nombre,dat);
//            fputs("\nAgrego ",dat);
//            fprintf(dat,"%d",pas);
//            fputs(" pasajes\n\n",dat);
//        }
//    }
//}
//
//void gastar(struct pasajeros usuario[],int n)
//{
//    int identificacion,i,can,pas;
//    FILE *dat=fopen("datos.txt","a");
//
//    printf("Identificacion: ");
//    scanf("%d",&identificacion);
//
//    for(i=1;i<=n;i++)
//    {
//        if(identificacion==usuario[i].cc)
//        {
//            fflush(stdin);
//            printf("Usuario\n");
//            printf("Nombre: ");
//            puts(usuario[i].nombre);
//            printf("Identificacion: ");
//            printf("%d",usuario[i].cc);
//            printf("\nNumero de pasajes: ");
//            printf("%d",usuario[i].pasajes);
//            printf("\n\nNumeros de pasajes que desea gastar: ");
//            scanf("%d",&pas);
//            if(usuario[i].pasajes>pas)
//            {
//                can=usuario[i].pasajes-pas;
//                printf("El usuario %s quedo con %d pasajes ",usuario[i].nombre,can);
//
//            }else{
//            printf("No tiene la cantidad suficiente de pasajes");
//            return 0;
//            }
//
//            fputs("El usuario: ",dat);
//            fputs(usuario[i].nombre,dat);
//            fputs("\nGasto ",dat);
//            fprintf(dat,"%d",pas);
//            fputs(" pasajes\n\n",dat);
//
//        }
//    }
//}
