#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char palabra[25];

    printf("Ingrese palabra: ");
    gets(palabra);
    for(i=0;i<25&&palabra[i]!=0;i++)
    {
        if(palabra[i]>=65&&palabra[i]<=90)
        {
            palabra[i]+=32;
        }
    }
    puts(palabra);

    return 0;
}
