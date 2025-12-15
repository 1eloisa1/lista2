/*
Escreva uma fun¸c˜ao minMax(int a, int b, int c, int *min, int *max) que receba trˆes valores inteiros e escreva, nos ponteiros min e max, respectivamente, o menor e o maior dos trˆes n´umeros. */

#include <stdio.h>

int _min2(int x, int y) {
    if (x <= y) {
        return x;
    }
    else {
        return y;
    }
}

int _max2(int x, int y) {
    if (x >= y) {
        return x;
    }
    else {
        return y;
    }
}

void minMax(int a, int b, int c, int *min, int *max) {
    
    int min_ab = _min2(a, b);
    *min = _min2(min_ab, c);
    
    int max_ab = _max2(a, b);
    *max = _max2(max_ab, c);
}

int main() {
    int a, b, c, minimo, maximo; 

    printf("digite o primeiro: ");
    scanf("%i", &a);

    printf("digite o segundo: ");
    scanf("%i", &b);

    printf("digite o terceiro: ");
    scanf("%i", &c);

    minMax(a, b, c, &minimo, &maximo);

    printf("numeros de entrada: a= %i, b= %i, c= %i\n", a, b, c);
    printf("O menor numero (min) e': %i\n", minimo);
    printf("O maior numero (max) e': %i\n", maximo);

    return 0;
}