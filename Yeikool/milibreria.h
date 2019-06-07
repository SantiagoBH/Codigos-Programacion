#include <stdio.h>
#include <stdlib.h>

struct personas{
    char  nombre[30];
    int cd;
    int pas;
};

void enviar()
{
    int n;
    struct personas lista[10];

    printf("numero de personas-->");
    scanf("%d",&n);

    FILE *txt=fopen("config.txt","r");
        //fputs("cantidad: ",txt);
        fprintf(txt,"%d\n",n);
        fclose(txt);

    FILE *txt1=fopen("datos.txt","a");

        for(int i=0;i<n;i++)
        {
            fflush(stdin);
            printf("\nNombre: ");
            gets(lista[i].nombre);
            fflush(stdin);
            printf("Documento: ");
            scanf("%d",&lista[i].cd);
            fflush(stdin);
            printf("Pasajes: ");
            scanf("%d",&lista[i].pas);
        }

        for(int i=0;i<n;i++)
        {
        fputs("\nNombre: ",txt1);
        fputs(lista[i].nombre,txt1);
        fputs("\nIdentificacion: ",txt1);
        fprintf(txt1,"%d",lista[i].cd);
        fputs("\nPasajes: ",txt1);
        fprintf(txt1,"%d\n",lista[i].pas);
        }
        fclose(txt1);
}
void mostrar()
{
  FILE *txt1=fopen("datos.txt","r");
  char carac;
  if(txt1==NULL)
  {
        printf("No se encontro archivo");
        return 0;
  }
  while(feof(txt1)==0)
    {
        carac=fgetc(txt1);
        printf("%c",carac);
    }

    fclose(txt1);
     printf("\n-------------------------------------------------------------------------------------------------\n");
}
void anadir_pasaje()
{
    struct personas lista[10];
    int doc1,doc,num,num1;
    printf("Documento del usuario: ");
    scanf("%d",&doc);
    for(int i=0;i<20;i++)
    {
        doc1=lista[i].cd;
        if(doc1==doc)
        {
            printf("Numero de pasajes a anadir: ");
            fflush(stdin);
            scanf("%d",&num);
            num1=(lista[i].pas)+num;

            printf("\nNombre: ");
            puts(lista[i].nombre);
            printf("Documento: ");
            printf("%d",lista[i].cd);
            printf("\nPasajes: ");
            printf("%d",num1);
            printf("\n-------------------------------------------------------------------------------------------------\n");

        }

    }

}
void restar_pasaje()
{
    struct personas lista[10];
    int doc1,doc,num,num1;
    printf("Documento del usuario: ");
    scanf("%d",&doc);
    for(int i=0;i<20;i++)
    {
        doc1=lista[i].cd;
        if(doc1==doc)
        {
            printf("Numero de pasajes a restar: ");
            fflush(stdin);
            scanf("%d",&num);
            num1=(lista[i].pas)-num;

            printf("\nNombre: ");
            puts(lista[i].nombre);
            printf("Documento: ");
            printf("%d",lista[i].cd);
            printf("\nPasajes: ");
            printf("%d",num1);
            printf("\n-------------------------------------------------------------------------------------------------\n");

        }

    }

}
