#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char opcion;

    do
    {
        printf("(A)lta usuario\n");
        printf("(B)aja usuario\n");
        printf("(M)odificacion usuario\n");
        printf("(S)alir usuario\n");
        printf("Elija una opcion: ");
        fflush(stdin);
        scanf("%c", &opcion);
        opcion=toupper(opcion); //Mayusculea

        switch(opcion)
        {
        case 'A':
            printf("Estoy dando de alta\n");
            break;
        case 'B':
            printf("Estoy dando de baja\n");
            break;
        case 'M':
            printf("Estoy modificando\n");
            break;
        }
        system("pause");
        system("cls");/* borra la consola */

    }while(opcion=='s');


    return 0;
}
