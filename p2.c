/*
Implemente a fun¸c˜ao somaMultiplos(int inicio, int fim, int k) que retorna a soma de todos os
m´ultiplos de k no intervalo fechado [inicio, f im].
*/
#include <stdio.h>

int somaMultiplos(int inicio, int fim, int k){
    if (inicio > fim){
        return 0;
    }
    if (inicio % k == 0){
        return inicio + somaMultiplos(inicio + 1, fim, k);
        }
    else{
        return somaMultiplos(inicio + 1, fim, k);
        }
    }

int main(){
    int i, f, num;

    printf("digite o inicio: ");
    scanf("%i", &i);

    printf("digite um fim: ");
    scanf("%i", &f);

    printf("digite o numero (k) cujos multiplos serao somados: ");
    scanf("%i", &num);

    if (num == 0){
        printf("k nao pode ser 0\n");
        return 1;
    }

    int resultado = somaMultiplos(i, f, num);

    printf("A soma dos multiplos de %i no intervalo [%i, %i] e': %i\n", num, i, f, resultado);

    return 0;
}