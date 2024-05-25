#include <stdio.h>

int main(){
    float a,b,c;

    printf ("Digite el numero a\n");
    scanf("%f", &a);
    printf("Digite el numero b\n");
    scanf("%f", &b);

    c = a+b;

    if(a+b>200){
        printf("El resultado es mayor a 200 y es %f \n", c);

    }else{
        printf("El resultado es menor a 200 y es %f \n", c);

    }if(a+b==200){
        printf("El resultado es %f \n", c);

    }
    return 0;
}