#include <stdio.h>
#include <stdlib.h>
//1. leer el apunte inputs
int calcular (int);

//tipos de variables primitivas (INT, Float)
int main()
{
    int x=7;
    printf("Antes de la funcion x=%d\n",x);
    x=calcular(x);
    printf("Despues de la funcion x=%d ",x);
    return 0;
}

int calcular(int a)
{
    a=9;
    /*if(a<9&&a>3)
    {
        return 1;
    }
    else
    {
        if(a)
        {
            return 0;
        }
    }
    */   //lo ideal es tener un solo return
    printf("En la funcion a=%d\n", a);
    return a;
}
