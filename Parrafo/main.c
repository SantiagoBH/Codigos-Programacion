#include <stdio.h>
#include <stdlib.h>

int findText  (char txt[], char words );
int main()
{
    char words;
    char txt[10];
    int i;

    printf("Texto de 10 palabras: ");
    for (i=0;i<10;i++)
    scanf("%s",&txt[i]);
    printf("Ingrese la Palabra a buscar: ");
    scanf("%s",&words);
    printf("Resultado : %d",findText (txt,words));

    return 0;
}
int findText(char txt[], char words )
{

 int i,contador;
 contador=0;
 for(i=0;i<=10;i++ )
 {
    if (words==txt[i])
    contador++;
 }

return contador;

}
