#include <stdio.h>
#include <stdlib.h>

// si no se escribe void, por defecto recibe un entero
void sumar(void); //PRIMER PROTOTIPO: No devuelve - No recibe.

int main()
{
    sumar();
    return 0;
}

void sumar(void)
{
    int numero1;
    int numero2;
    int suma;

    printf("Introducir el 1er numero");
    scanf("%d", &numero1);

    printf("Introducir el 2do numero");
    scanf("%d", &numero2);

    suma= numero1+numero2;
    printf("La suma de ambos numeros es: %d", suma);

}
