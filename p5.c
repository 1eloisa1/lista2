/*
Implemente a fun¸c˜ao recursiva passos(int n) que retorna o n´umero de opera¸c˜oes necess´arias para reduzir
n a 1 segundo as regras: Se n ´e par, divida por 2. Se n ´e ´ımpar, subtraia 1. Conte quantos passos foram
realizados at´e atingir o valor 1.
*/

#include <stdio.h>
int passos(int n){
    if (n <= 1){
        return 0;
    } else{
        if (n % 2 == 0){
            return 1 + passos(n/2);
        } else{
            return 1 + passos(n-1);
        }
    }
}

int main(){
    int num;
    printf("digite um numero: ");
    scanf("%i", &num);
    int resultado = passos(num);

    printf("o numero de passos para ir de %i  ate 1 e' %i\n", num, resultado);

    return 0;
}