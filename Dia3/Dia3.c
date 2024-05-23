//Ejercicios operaciones aritmeticas
//Pedirle al usuario que dijite 2 numers 
//y tenemos que sumaelis, restarlos, multiplicarlos 
//y dividirlos

#include <stdio.h>

int main() {
    float num1, num2, suma,resta, multiplicacion, division;
    printf("Escribe 2 numeros \n");
    scanf("%f %f", &num1, &num2);
    suma= num1 + num2;
    resta= num1 - num2;
    multiplicacion =num1 * num2;
    division=num1 / num2;
    printf("La suma de los numeros es %.2f\nla resta es %.2f\nla multiplicacion es %.2f\n la division es%.2f\n", suma, resta, multiplicacion, division);
    printf("Si gracias por usar el programa\n");
    return 0;
}