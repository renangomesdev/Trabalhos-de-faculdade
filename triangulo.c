#include <stdio.h>

int main()
{
	float A, b, a;
	
	printf("Digite o valor da base em cm: ");
	scanf("%f", &b);
	
	printf("Digite o valor da altura em cm: ");
	scanf("%f", &a);
	
	A=(b*a)/2;
	
	printf("O valor da base eh %.2f", A);
	printf("cm^2");
	
	return 0;
}
