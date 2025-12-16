/*Dois n´umeros s˜ao amigos se a soma dos divisores pr´oprios de um ´e igual ao outro, e vice-versa. Implemente:
int somaDivisores(int n, int d) para somar divisores de modo recursivo; int amigos(int a, int
b) para determinar se s˜ao n´umeros amigos.
*/

#include <stdio.h>

int somaDivisores(int n, int d){
    if (d > n / 2){
        return 0;
    } else{
        if (n % d == 0){
            return d + somaDivisores(n, d+1);
        } else{
            return somaDivisores(n, d+1);
        }
    }
}

int amigos(int a, int b){
    if ((somaDivisores(a, 1) == b) && (somaDivisores(b, 1) == a)){
        return 1;
    } else{
        return 0;
    }
}

int main(){
    int a, b;

    printf("digite o inicio: ");
    scanf("%i", &a);

    printf("digite o inicio: ");
    scanf("%i", &b);

    if (a <= 0 || b <= 0) {
        printf("Os numeros devem ser positivos.\n");
        return 1;
    }
    
    if (a != b){
        if (amigos(a, b)){
            printf("os numeros %i e %i sao amigos!\n", a, b);
        } else{
            printf("os numeros %i e %i nao sao amigos!\n", a, b);
        }
    }
    else{
        printf("os numeros %i e' igual o b!\n", a);
    }
    return 0;
}
