#include <stdio.h>
#include <stdlib.h>
//variables goblales, se declaran por afuera de cualquier funcion y tienen la mayor posibilidad posible,
//se puede ver desde cualquier funcion
//No se recomienda usar variables globales
void calcular (void);

int global= 7;


int main()
{

    printf("En el main %d\n",global);
    calcular();
    printf("Despues de la funcion %d", global);
    return 0;
}

void calcular(void)
{
    global = 100;
}
