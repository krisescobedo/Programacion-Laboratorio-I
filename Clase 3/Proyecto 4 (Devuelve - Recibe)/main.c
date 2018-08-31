#include <stdio.h>
#include <stdlib.h>

int sumar(int, int);
int main()
{
    int numero1;
    int numero2;
    int suma;

    printf("Introducir el 1er numero");
    scanf("%d", &numero1);

    printf("Introducir el 2do numero");
    scanf("%d", &numero2);

    suma = sumar(numero1,numero2);
    printf("El resultado es: %d", suma);

    return 0;
}

int sumar(int num1, int num2)
{
    int suma;
    suma = num1+num2;
    return suma;
}
