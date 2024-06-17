#include <stdio.h>

int main() {
    float masa, aceleracion, fuerza;

    printf("Ingrese la masa del objeto (en kilogramos): ");
    scanf("%f", &masa);

    printf("Ingrese la aceleración aplicada al objeto (en metros por segundo al cuadrado): ");
    scanf("%f", &aceleracion);

    fuerza = masa * aceleracion;

    printf("La fuerza aplicada al objeto es: %.2f newtons\n", fuerza);

    return 0;
}