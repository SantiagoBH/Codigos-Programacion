#include <stdio.h>
#include <stdlib.h>
#include "milibreria.h"

void restar_pasaje();
void enviar();
void mostrar();
void anadir_pasaje();


int main()
{
    struct personas lista[20];
    char op;
    FILE *txt1,*txt;

       printf("\n  EMPRESA DE BUSES\n");
       printf("\n-------------------------------------------------------------------------------------------------\n");
       xx:
       printf("\n [a]: Anadir persona \n [b]: Mostrar lista\n [c]: Anadir pasaje\n");
       printf(" [d]: Gastar pasaje\n [e]: Eliminar datos\n [f]: Cerrar programa\n \n Seleccione una opcion: ");
       scanf(" %c",&op);
       printf("\n-------------------------------------------------------------------------------------------------\n");

       switch(op)
       {
      case'a':
         enviar();
         goto xx;
         break;

      case'b':
           mostrar();
           goto xx;
       break;

       case'c':
           anadir_pasaje();
           goto xx;
       break;

       case'd':
           restar_pasaje();
           goto xx;
       break;

       case'e':
          txt1=fopen("datos.txt","w");
          int rename(txt1);
          fclose(txt1);
          txt=fopen("config.txt","w");
          int rename(txt);
          fclose(txt);
          printf("Datos eliminados");
          printf("\n-------------------------------------------------------------------------------------------------\n");
          goto xx;
       break;

        case'f':
          return 0;
       break;

       }

       return 0;
    }
