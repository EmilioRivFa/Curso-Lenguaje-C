#include <stdio.h>

int main() {
    int numero = 50;
    int *pNumero;
    printf("Dato: %i", numero);
    printf("\nPosicion %p\n",&numero);

    pNumero = &numero;
    printf("Valor de la variable\n");
    printf("Dato: %i", numero);
    printf("Dato: %i",*pNumero);

    printf("Posicion de memoria: \n");
    printf("Posicion: %p", &numero);
    printf("Posicion %p",pNumero);
    return 0;

}