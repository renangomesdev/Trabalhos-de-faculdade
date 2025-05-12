#include <stdio.h>

int main()
{
    int numero, i, ehPrimo = 1;

    printf("Digite o numero que deseja saber: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        ehPrimo = 0;
    } else {
    
        for (i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                ehPrimo = 0;
                break;
            }
        }
    }

    if (ehPrimo)
        printf("O numero eh primo\n");
    else
        printf("O numero nao eh primo\n");

    return 0;
}

