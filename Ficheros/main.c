#include <stdio.h>
#include <stdlib.h>

int main()
{
    char pal[100];
    FILE *txt;

    txt=fopen("Fichero.txt","r");

    if(txt==NULL)
    {
        printf("No se encontro archivo\n");
        exit(1);
    }

    while(!feof(txt))
    {
        fgets(pal,100,txt);
        printf("%s",pal);
    }
    fclose(txt);
    return 0;
}
