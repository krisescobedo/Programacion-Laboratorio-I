#include <stdio.h>
#include <stdlib.h>

int sumar (void); // DEVUELVE-NO RECIBE

int main()
{
    int suma;
    suma = sumar();
    printf("El resultado es: %d", suma);
    return 0;
}



int sumar (void)
{
    int suma;
    int numeroUno;
    int numeroDos;

    printf("Ingrese el numero 1: ");
    scanf("%d", &numeroUno);

    printf("Ingrese el numero 2: ");
    scanf("%d", &numeroDos);

    suma = numeroUno + numeroDos;

    return suma;
}
