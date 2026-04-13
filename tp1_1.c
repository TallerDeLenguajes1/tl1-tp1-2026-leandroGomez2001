#include <stdio.h>

int main() {
    printf("Hola mundo\n");

    int variable = 14;
    int *puntero = &variable;

    printf("1. Contenido del puntero: %d\n", *puntero);
    printf("2. Direccion almacenada por el puntero: %p\n", puntero);
    printf("3. Direccion de memoria de la variable: %p\n", &variable);
    printf("4. Direccion de memoria del puntero: %p\n", &puntero);
    printf("5. Tamanio de la variable: %zu bytes\n", sizeof(variable));

    return 0;
}