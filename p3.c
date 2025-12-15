/*Um n´umero ´e perfeito quando a soma de todos os seus divisores pr´oprios ´e igual a ele. Implemente: int
somaDiv(int n, int d) para somar recursivamente os divisores de n menores que ele; e int ehPerfeito(int
n) para indicar se o n´umero ´e perfeito.*/

#include <stdio.h>

int somaDiv(int n, int d){
     if (d > n / 2){
        return 0;
    }
    else{
        if (n % d == 0){
            return d += somaDiv(n, d+1);
        } else{
            return somaDiv(n, d+1);
        }
    }
}

int ehPerfeito(int n){

    if (n <= 1){
        return 0;
    }

    int somadosdivs = somaDiv(n, 1);

    if (somadosdivs == n){
        return 1;
    } else{
        return 0;
    }
}

int main(){
    int nunteste;

    printf("digite o inicio: ");
    if (scanf("%i", &nunteste) != 1 || nunteste <= 0){
        printf("entrada invalida");
        return 1;
    }

    if (ehPerfeito(nunteste)){
        printf("o numero %i eh perfeito!\n", nunteste);
    } else{
        printf("o numero %i nao eh perfeito!\n", nunteste);
    }

    return 0;
}