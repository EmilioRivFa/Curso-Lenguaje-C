#include <stdio.h>

int main(){
    int numero;
    puts("EScribe un numero\n");
    scanf("%i", &numero);

    (numero%2==0) ? printf("El numero es par\n") : printf("El numero es inpar\n");
    return 0;

}