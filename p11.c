/*. Implemente uma fun¸c˜ao: void reduz(int *a, int *b); que aplica repetidamente as regras:
(
a = a − b, se a > b,
b = b − a, se b > a.
O processo termina quando a = b. O programa deve imprimir quantas opera¸c˜oes foram realizadas at´e a
estabiliza¸c˜ao.*/
#include <stdio.h>

void reduz(int *a, int *b) {
    static int operacoes = 0;

    if (*a == *b) {
        printf("Numero de operacoes: %d\n", operacoes);
        operacoes = 0; 
        return;
    }

    if (*a > *b) {
        *a = *a - *b;
    } else {
        *b = *b - *a;
    }

    operacoes++;

    reduz(a, b);
}

int main() {
    int a, b;

    printf("Digite o primeiro valor inteiro positivo (A):\n");
    if (scanf("%d", &a) != 1) return 1;

    printf("Digite o segundo valor inteiro positivo (B):\n");
    if (scanf("%d", &b) != 1) return 1;

    reduz(&a, &b);

    printf("Valores finais: a = %d, b = %d\n", a, b);

    return 0;
}