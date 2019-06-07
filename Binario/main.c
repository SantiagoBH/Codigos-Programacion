#include <stdio.h>
#include <stdlib.h>

void binario(int n);

int main()
{
    int num;

    do{
    printf("Ingrese numero: ");
    scanf("%d",&num);
    }
    while(num<0);

    binario(num);

    return 0;
}

void binario(int n){
    if(num>1) binario(n/2);
    printf("%d",n%2);
}

