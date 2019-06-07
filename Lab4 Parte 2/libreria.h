#include <stdlib.h>
#include <stdio.h>

struct pasajeros{
    char nombre[30];
    int cc;
    int pasajes;
};

void cargar()
{
    char carac;
    FILE *dat=fopen("datos.txt","rt");

    if(dat==NULL)
    {
        printf("No se encontro archivo");
        return 0;
    }

    while(feof(dat)==0)
    {
        carac=fgetc(dat);
        printf("%c",carac);
    }

    fclose(dat);
}

void guardar()
{
    int n;
    FILE *dat=fopen("datos.txt","a");
    FILE *txt=fopen("config.txt","r");

    fscanf(txt,"%d",&n);

    struct pasajeros usuario[10];

    for(int i=1;i<=n;i++)
    {
        fputs("Usuario ",dat);
        fputs("\nNombre: ",dat);
        fputs(usuario[i].nombre,dat);
        fputs("\nIdentificacion: ",dat);
        fprintf(dat,"%d\n",usuario[i].cc);
        fputs("Numero de pasajes: ",dat);
        fprintf(dat,"%d\n\n",usuario[i].pasajes);
    }

    printf("Se guardo la informacion");
    fclose(dat);
}

void anadir()
{
    int i=0,n;

    struct pasajeros usuario[10];

    FILE *dat=fopen("datos.txt","a");
    FILE *txt=fopen("config.txt","r");
    fscanf(txt,"%d",&n);

    fflush(stdin);
    printf("Usuario\n");
    printf("Nombre: ");
    gets(usuario[i].nombre);
    printf("Identificacion: ");
    scanf("%d",&usuario[i].cc);
    printf("Numero de pasajes: ");
    scanf("%d",&usuario[i].pasajes);

    fputs("Usuario\n",dat);
    fputs("Nombre: ",dat);
    fputs(usuario[i].nombre,dat);
    fputs("\nIdentificacion: ",dat);
    fprintf(dat,"%d",usuario[i].cc);
    fputs("\nNumero de pasajes: ",dat);
    fprintf(dat,"%d\n\n",usuario[i].pasajes);
}

void pasaje()
{
    int identificacion,pas,can,n;

    struct pasajeros usuario[10];

    FILE *dat=fopen("datos.txt","a");
    FILE *txt=fopen("config.txt","r");
    fscanf(txt,"%d",&n);
    printf("%d",n);

    fflush(stdin);
    printf("Identificacion: ");
    scanf("%d",&identificacion);

    for(int i=1;i<=n;i++)
    {
        if(identificacion==usuario[i].cc)
        {
            fflush(stdin);
            printf("Usuario\n");
            printf("Nombre: ");
            puts(usuario[i].nombre);
            printf("Identificacion: ");
            printf("%d",usuario[i].cc);
            printf("\nNumero de pasajes: ");
            printf("%d",usuario[i].pasajes);
            printf("\n\nNumeros de pasajes que desea agregar: ");
            scanf("%d",&pas);
            can=usuario[i].pasajes+pas;
            printf("El usuario %s tiene %d pasajes",usuario[i].nombre,can);

            fputs("El usuario: ",dat);
            fputs(usuario[i].nombre,dat);
            fputs("\nAgrego ",dat);
            fprintf(dat,"%d",pas);
            fputs(" pasajes\n\n",dat);
        }
    }
}

void gastar()
{
    int identificacion,i,can,pas,n;
    FILE *dat=fopen("datos.txt","a");
    FILE *txt=fopen("config.txt","r");
    fscanf(txt,"%d",&n);

    struct pasajeros usuario[10];

    printf("Identificacion: ");
    scanf("%d",&identificacion);

    for(i=1;i<=n;i++)
    {
        if(identificacion==usuario[i].cc)
        {
            fflush(stdin);
            printf("Usuario\n");
            printf("Nombre: ");
            puts(usuario[i].nombre);
            printf("Identificacion: ");
            printf("%d",usuario[i].cc);
            printf("\nNumero de pasajes: ");
            printf("%d",usuario[i].pasajes);
            printf("\n\nNumeros de pasajes que desea gastar: ");
            scanf("%d",&pas);
            if(usuario[i].pasajes>pas)
            {
                can=usuario[i].pasajes-pas;
                printf("El usuario %s quedo con %d pasajes ",usuario[i].nombre,can);

            }else{
            printf("No tiene la cantidad suficiente de pasajes");
            return 0;
            }

            fputs("El usuario: ",dat);
            fputs(usuario[i].nombre,dat);
            fputs("\nGasto ",dat);
            fprintf(dat,"%d",pas);
            fputs(" pasajes\n\n",dat);

        }
    }
}
