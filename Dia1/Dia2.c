#include <stdio.h>
int variable = 0;

int main() {
    printf("\nVariable = %i",variable);

    for (variable = 2; variable <= 20; variable+=2)
    continue;
    printf("\nVariable = %i",variable);
    variable = 10 + 5;
    printf("\nValor final de la variable = %i", variable);
    
  
    return 0;
};
