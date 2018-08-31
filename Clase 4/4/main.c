#include <stdio.h>
#include <stdlib.h>

int pedirEntero(char[],int,int);
//int scanf(char [], int*);

int main()
{
    int edad;
    edad = pedirEntero("edad: ", 18, 65);

    return 0;
}

//validacion
int pedirEntero(char texto[], int min, int max)
{
    int numero;

    printf("Ingrese %s", texto);
    scanf("%d", &numero); //scanf lo que quiere hacer es guardar un valor en una variable
    while(numero>min || numero<max)
    {
        printf("Reingrese %s",texto);
        scanf("%d", &numero);
    }

    return numero;
}
