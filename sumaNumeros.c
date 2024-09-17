/*
Determinar suma de todos los hasta el numero que de el usuario
*/

int main(){

	int cont,num,suma;

	printf("Escribe hasta que numero quieres que se haga la suma\n");
	scanf("%i",&num);

	cont = 1;

	while(cont<=num){
		suma += cont;
		cont++;
	}

	printf("La suma de hasta el numero %i es de %i",num,suma);

	return 0;
}
