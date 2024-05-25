#include <stdio.h>

int main(){
    float calificacion;
    printf("Escribe tu calificacion\n");
    scanf("%f", &calificacion);

    if(calificacion>6){
        printf("felicidades pasaste el curso con %f", calificacion);


    }else{
        printf("LO lamento no pasaste el curso");
    }
    return 0;
}