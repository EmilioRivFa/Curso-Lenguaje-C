#include <stdio.h>
#include <math.h>

int main() {
    float cateto1, cateto2, hipotenusa;
    printf("Escribe los valores de los catetos\n");
    scanf("%f", &cateto1,&cateto2);

    hipotenusa = sqrt(pow(cateto1, 2)+ pow(cateto2, 2));
    printf("El valor de la ipotenusa es: %.2f", hipotenusa);
    return 0;



}