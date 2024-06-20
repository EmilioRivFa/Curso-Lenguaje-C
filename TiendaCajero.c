//Simular una Tienda con entradas y salidas de capital

#include <stdio.h>

int main(){
	
	int opcion;
	float agregar,retirar,saldo=3000;
	
	printf("\t*****************************************\n");
	printf("\t*Este es un Simulador de Tienda o Cajero*\n");
	printf("\t*****************************************\n\n");
	printf("\tSelecciona una Opcion\n");
	printf("\t1) Depositar Dinero\n");
	printf("\t2) Retirar Dinero\n");
	printf("\t3) Salir del Cajero\n");
	printf("\t\nOpcion Seleccionada: ");
	scanf("%i",&opcion);
	
	switch(opcion){
		
		case 1: printf("Cuanto dinero quiere Depositar?\n");
		scanf("%f",&agregar);
		saldo += agregar;
		printf("Tu saldo actual es de %f\n",saldo);
		break;
		
		
		
		case 2: printf("Cuanto dinero quiere Retirar\n");
		scanf("%f",&retirar);
		
		if(retirar>saldo){
			printf("Tu saldo disponible solo es de %f",saldo);
		}else{
			saldo -= retirar;
			printf("Tu saldo total es de %f",saldo);
		}
		break;
		
		
		case 3: printf("Gracias por usar la aplicacion\nHasta la proxima");
		break;
		
	}
	
	
	
	return 0;
}

