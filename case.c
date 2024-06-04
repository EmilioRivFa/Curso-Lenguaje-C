//Decirle al alumno algo con base en sus calificaciones 
/*9-10 -> Excelente, sigue así
8-9 -> Muy bien, puedes mejorar
7-8 -> Eres un estudiante regular
0-6.9 -> Puedes mejorar */
#include <stdio.h>
int main(){
	
	char calif;
	
	printf("Digita tu calificacion\n");
	scanf("%c",&calif);
	
	switch(calif){
		
		case 1: printf("Muy mal sacaste %i",calif); break;
		case 2: printf("Muy mal sacaste %i",calif); break;
		case 3: printf("Muy mal sacaste %i",calif); break;
		case 4: printf("Muy mal sacaste %i",calif); break;
		case 5: printf("Muy mal sacaste %i",calif); break;
		case 6: printf("Muy bien sacaste %i y pansaste",calif); break;
		case 7: printf("Muy bien sacaste %i felicidades",calif); break;
		case 8: printf("Muy bien sacaste %i buen alumno",calif); break;
		case 9: printf("Muy bien sacaste %i casi perfecto",calif); break;
		case 10: printf("Muy bien sacaste %i eres el mejor",calif); break;	
		default: printf("No es una opcion valida\n"); break;
		
		
	}	
	
	return 0;
}


