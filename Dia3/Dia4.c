//Areas de figuras trigonometrias

#include <stdio.h>

int main(){
   
   float base, altura, area;

    printf("Este programa calcula el area de un triangulo\ninserta la base y la altura\n");
    scanf("%f %f" ,&base,&altura); 

    area = (base * altura) / 2;
    printf("El area del triangulo es %.2f", area);

  
    return 0;
}