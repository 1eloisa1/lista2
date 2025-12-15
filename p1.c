/*
Implemente uma fun¸c˜ao recursiva somaDigitos(int n) que retorne a soma dos d´ıgitos de um n´umero
inteiro. Exemplo: entrada 483 deve produzir sa´ıda 15.
*/
#include <stdio.h>
int somaDigitos(int n){
    if (n == 0){
        return 0;
    }
    else{ 
        return (n % 10) + somaDigitos(n/10);
        }
}

int main(){
    int num;
    printf("digite um numero: ");
    scanf("%i", &num);
    int resultado = somaDigitos(num);

    printf("a soma dos digitos de %i e' %i\n", num, resultado);

    return 0;
}