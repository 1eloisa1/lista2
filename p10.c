/* Implemente uma fun¸c˜ao recursiva que imprima a decomposi¸c˜ao de um n´umero inteiro N em fatores primos:
N = p1 · p2 · · · · · pk. Use a fun¸c˜ao: void fatoresPrimos(int n, int divisor); A fun¸c˜ao deve imprimir
cada fator assim que ele for encontrado, sem armazenar resultados em vetores.*/
#include <stdio.h>

void fatoresPrimos(int n, int divisor) {
    if (n == 1) {
        return;
    }

    if (n % divisor == 0) {
        if (n / divisor == 1) {
            printf("%i", divisor);
        } else {
            printf("%i x ", divisor);
        }

        fatoresPrimos(n / divisor, divisor);
        
    } else {
        int proximoDivisor;
        if (divisor == 2) {
            proximoDivisor = 3;
        } else {
            proximoDivisor = divisor + 2;
        }

        fatoresPrimos(n, proximoDivisor);
    }
}

int main() {
    int n;

    printf("Digite um numero para a decomposicao: ");
    if (scanf("%i", &n) != 1 || n <= 1) {
        printf("O numero deve ser um inteiro maior que 1.\n");
        return 1;
    }

    printf("%i = ", n);
    
    fatoresPrimos(n, 2);
    
    printf("\n");

    return 0;
}