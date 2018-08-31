#include <stdio.h>
#include <stdlib.h>

void sumar (int num1, int num2); // NO DEVUELVE - SI RECIBE
int main()
{
    int numero1;
    int numero2;
    int suma;

    printf("Introducir el 1er numero");
    scanf("%d", &numero1);

    printf("Introducir el 2do numero");
    scanf("%d", &numero2);

    sumar(numero1,numero2);

    return 0;
}

void sumar(int num1, int num2)
{
    int suma;
    suma= num1+num2;
    printf("la suma de los numeros es: %d", suma);

    return;
}
