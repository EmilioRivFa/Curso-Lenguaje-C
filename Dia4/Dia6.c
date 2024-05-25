//Aumnetar el salario al 10%
#include <stdio.h>


int main() {
    char nombre[40];
    int salario;
    float aumentoSalario;
    
    
    printf("Ingrese su nombre porfavor\n");
  
    printf("Inserte su salario\n");
    scanf("%i", &salario);

    aumentoSalario = (salario*.1)+salario;
    printf("Felicidades %s tu salario ahora es de %.2f", nombre, aumentoSalario);
    return 0;

}