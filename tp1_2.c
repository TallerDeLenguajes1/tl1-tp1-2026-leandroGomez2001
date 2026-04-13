#include <stdio.h>

// inciso a)
int cuadrado(int n) {
    return n * n;
}

// inciso b)
void mostrar_cuadrado(int n) {
    printf("El cuadrado del numero %d es: %d\n", n, n * n);
}

// inciso c)
void mostrar_info(int *p) {
    printf("Contenido: %d\n", *p);
    printf("Direccion: %p\n", p);
}

// inciso d)
void invertir(int *a, int *b) {
    int reserva = *a;
    *a = *b;
    *b = reserva;
}

// inciso e)
void orden(int *a, int *b) {
    if (*a > *b) {
        int reserva = *a;
        *a = *b;
        *b = reserva;
    }
}

// inciso f) (main)
int main() {
    int a, b;

    printf("Ingrese el primer valor: ");
    scanf("%d", &a);
    printf("Ingrese el segundo valor: ");
    scanf("%d", &b);

    printf("\n--- Cuadrado del primer valor ingresado ---\n");
    printf("Cuadrado del primer valor: %d\n", cuadrado(a));  

    mostrar_cuadrado(a);

    printf("\n--- Informacion de variables ---\n");
    printf("Variable a:\n");
    mostrar_info(&a);
    printf("Variable b:\n");
    mostrar_info(&b);

    printf("\n--- Invertir ---\n");
    printf("Antes: a=%d, b=%d\n", a, b);
    invertir(&a, &b);
    printf("Despues: a=%d, b=%d\n", a, b);

    printf("\n--- Orden ---\n");
    orden(&a, &b);
    printf("Ordenados: a=%d, b=%d\n", a, b);

    return 0;
}
