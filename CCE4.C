#include <stdio.h>

int main (){
    int dia;
    puts("Selecciona un numero de dias de la semana del 1 al 7\n");
    scanf("%i", &dia);
    switch(dia){
        case 1: printf("seleccionaste el Lunes\n"); 
        break;
        case 2: printf("seleccionaste el Martes\n"); 
        break;
        case 3: printf("seleccionaste el Miercoles\n"); 
        break;
        case 4: printf("seleccionaste el Jueves\n"); 
        break;
        case 5: printf("seleccionaste el Viernes\n"); 
        break;
        case 6: printf("seleccionaste el Sabado\n"); 
        break;
        case 7: printf("seleccionaste el Domingo\n");  
        break;
        default: puts("Esta opcion nos es valida"); 
        break;


    }
    return 0;
}