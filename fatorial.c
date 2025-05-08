#include <stdio.h>

int main() {
    int num, i;
    double fatorial = 1;

    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &num);


    if (num < 0) {
        printf("Fatorial não existe para números negativos.\n");
    } else {
        
        for (i = 1; i <= num; i++) {
            fatorial = fatorial * i;
        }

        
        printf("Fatorial de %d é %.0f\n", num, fatorial);
    }

    return 0;
}

