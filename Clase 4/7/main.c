#include <stdio.h>
#include <stdlib.h>
// FACTORIAL


int calcularFactorial (int); // estructura repititiva

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

int main()
{
    int numero;
    int factorial = 1;
    int i;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    factorial=calcularFactorial(numero);


/*    for (i=numero; i>=1 ; i--)
    {
        factorial = factorial *i;
    } */




    printf("El factorial es: %d", factorial)
    return 0;
}

int calcularFactorial (int numero)
{
    int factorial;

    if(numero==0)
    {
        factorial = 1;
    }
    else
    {
        factorial = numero*calcularFactorialnumero-1()
    }

    return factorial;
}

