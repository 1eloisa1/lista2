/* 7. Um n´umero ´e pal´ındromo quando permanece igual ao ser lido de tr´as para frente. Implemente duas fun¸c˜oes:
int inverte(int n, int acumulador) que inverte o n´umero recursivamente; int ehPalindromo(int
n) que retorna 1 se o n´umero for pal´ındromo e 0 caso contr´ario.*/
#include <stdio.h>

int inverte(int n, int acumulador){
    if (n  == 0){
        return acumulador;
    } else{
        int digitoAtual = n % 10;
        int novoAcumulador = (acumulador * 10) + digitoAtual;
        int nRestante = n / 10;
        return inverte(nRestante, novoAcumulador);
    }
}

int ehPalindromo(int n){
    int nOriginal = n;
    int nInvertido = inverte(nOriginal, 0);
    if ((nOriginal == nInvertido)){
        return 1;
    } else{
        return 0;
    }
}

int main(){
    int a;

    printf("digite um numero: ");
    scanf("%i", &a);

    if (a <= 0) {
        printf("O numero deve ser positivo.\n");
        return 1;
    }
    
    if (ehPalindromo(a)){
        printf("o numero %i e' palindromo!\n", a);
    } else{
        printf("o numero %i nao e' palindromo!\n", a);
    }
    return 0;
}
