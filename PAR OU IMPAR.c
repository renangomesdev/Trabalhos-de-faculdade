#include <stdio.h>

int main()
{
	int numero;
	printf("Digite o numero: ");
	scanf("%d", &numero);
	
	if(numero%2==0 && numero>0){
	printf("O numero eh par e positivo");
}
	else if(numero%2==0 && numero<0)
	printf("O numero eh par e negativo");
	else if(numero%2!=0 && numero>0)
	printf("O numero eh impar e positivo");
	else if(numero%2!=0 && numero<0)
	printf("O numero eh impar e negativo");
	else
	printf("O numero eh 0");
	
	
	return 0;
	
}
