#include "UTN_INPUT.h"


int pedirEntero(int*, char[],int,int)
{
    int numero;

    printf("Ingrese %s", texto);
    scanf("%d", &numero); //scanf lo que quiere hacer es guardar un valor en una variable
}

int validarEntero(int numero, char texto[], int min, int max)
    {
         while(numero>min || numero<max)
    {
        printf("Reingrese %s",texto);
        scanf("%d", &numero);
    }
    }

    return numero;


