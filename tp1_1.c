#include <stdio.h>

int main()
{
    printf("hola mundo \n");

    int mi_variable = 25;
    int *puntero = &mi_variable;

    printf("1) El contenido (valor) al que apunta el puntero: %d\n", *puntero);

    printf("2) La direccion almacenada por el puntero: %p\n", puntero);

    printf("3) La direccion de memoria de la variable: %p\n", &mi_variable);

    printf("4) La direccion de memoria del propio puntero: %p\n", &puntero);

    printf("5) El tamano de memoria de la variable es: %zu bytes\n", sizeof(mi_variable));

    return 0;
}