/*Dados dois n´umeros inteiros X e Y , crie uma fun¸c˜ao que calcule a soma dos n´umeros ´ımpares estritamente
entre eles. Se X > Y , troque-os.*/
#include <stdio.h>
int soma(int atualn, int limite){
    if (atualn >= limite){
        return 0;
    } else{
        if (atualn % 2 != 0){
            return atualn + soma(atualn + 1, limite);
        } else{
            return soma(atualn + 1, limite);
        }
    }
}

int somaImpar(int x, int y){
    int aux;
    if (x>y){
        aux = x;
        x = y;
        y = aux;
    }
    return soma(x + 1, y);
}

int main(){
    int a, b; 
    
    printf("digite o inicio: ");
    scanf("%i", &a);

    printf("digite o inicio: ");
    scanf("%i", &b);

    int resultado = somaImpar(a, b);
    printf("os numeros digitados sao: %i, %i e soma dos nuumeros impares estritamente entre eles %i\n", a, b, resultado);
    
    return 0;
}
