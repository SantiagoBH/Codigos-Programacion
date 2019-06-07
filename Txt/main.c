#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char txt[1000];
    char palabra[25];
    int i,a,b;
    b=0;

    printf("Ingrese texto: \n");
    gets(txt);

    for(i=0,a=0;i<1000;i++)
    {
        if(txt[i]==32)
        {
            a++;
        }
    }

    printf("\nTiene %d Palabras",a);
    printf("\nPalabra a buscar: ");
    gets(palabra);

    do{
        if(strstr(txt,palabra))
        {
            b++;
        }
    }while(palabra==txt[i]);
    printf("\nSe repite la palabra %s: %d",palabra,b);

    return 0;
}

