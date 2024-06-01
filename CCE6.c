#include <stdio.h>

int main(){
    float num1, num2;
    
    printf("Digita 2 numeros\n");
    scanf("%f %f", &num1, &num2);

    if(num1<num2){
        printf("El numero %f es el menor\n", num1);

    }else{
        printf("El numero %f es el menor\n", num2);
    }
    return 0;
}