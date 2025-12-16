/*. Leia seis valores num´ericos. Crie uma fun¸c˜ao que conta quantos s˜ao positivos e calcule a m´edia entre eles.*/

#include <stdio.h>
#define maxLeituras 6

int somaPositivos(int indice, int *contagemPos){
    if (indice > maxLeituras){
        return 0;
    } 
    int valor;
    
    printf("digite o numero %i/%i: ", indice, maxLeituras);
    if (scanf("%i", &valor) != 1){
        printf("entrada invalida");
        
        while (getchar() != '\n');

        return 0;
}
    int somaRestante = somaPositivos(indice + 1, contagemPos);

    if (valor > 0){
        (*contagemPos)++;
        return valor + somaRestante;
    } else{
        return somaRestante;

    }
}
int main(){
    int totalContados = 0, somaTotal;
    
    somaTotal = somaPositivos(1, &totalContados);

    printf("total de positvos contados: %i\n", totalContados);

    if (totalContados > 0){
        int media = somaTotal / totalContados;
        printf("soma total de positvos contados: %i\n", somaTotal);
        printf("media dos positivos: %i", media);
    } else{
        printf("nao ha numeros positivos para se calcular a media");
    }
    return 0;
}
