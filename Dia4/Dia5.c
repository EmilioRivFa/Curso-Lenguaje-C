#include <stdio.h>
#include <math.h>

int main() {
    float lado,area;

    printf("Este programa calcula el area de un cuadrado\n Inserta el valor del lado\n");

    scanf("%f" ,&lado); 
    
    area = pow(lado,2);
    printf("El area del cuadrado es de %.2f", area);

     
    return 0;
}