#include <stdio.h>
#include <stdlib.h>

struct cliente
{
    char Nombre[25];
    char Ciudad[25];
    int edad;
};

struct cliente lista
{
    "Victor Naranjo Valencia","Armenia",24,
    "Natalia Trujillo Arias","Cali",23,
    "Juan Camilo Duque","Puerto Asis",22,
    "Katerine Gil","Bogota",21,
    "Hector Fabio Torres","Manizales",41,
    "Laura Catalina","Florencia",15,
};

void cliente(struct cliente lista);

int main()
{
    void cliente(struct cliente lista);

    return 0;
}
void cliente(struct cliente lista)
{
    printf("%s",lista.Nombre);
}
