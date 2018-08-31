#include <stdio.h>
#include <stdlib.h>
//PUNTERO(pointer): variable que guarda una direccion de memoria de otra variable
//int* = referencia     * = operador de inacceso     & operador direccuib
void calcular(int*);

int main()
{
    int x=5;
    calcular(&x);
    printf("x= %d", x);
    return 0;
}
//pasaje por referencia
void calcular(int* p)
{
    *p = 10;
}
