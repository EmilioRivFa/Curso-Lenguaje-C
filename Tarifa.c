#define Tarifa3 "Premium"
#define Tarifa2 "Intermedia"
#define Tarifa1 "Basica"
#include <stdio.h>

int main(){
    float precio;
    

    printf("Digite el monto que esta dispuesto por su plan\n");
    scanf("%f", &precio);

    if(precio<500 && precio>99){
        printf("la tarifa apta es %s", Tarifa1);

    }
    if(precio>=500 && precio<1000){
        printf("la tarifa apta es %s", Tarifa2);

    }
    if(precio>=1000 && precio<=1500){
        printf("la tarifa apta es %s", Tarifa3);

    }
    return 0;
}