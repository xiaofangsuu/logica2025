#include <stdio.h>
 
int main() {
 
    int N,X[1000];
    scanf("%d",&N);
    
    for (int i = 0; i<N; i++){
        scanf("%d",&X[i]);
    }
    
    int menor_valor = X[0];
    int posicao = 0;
    
    for (int i = 1; i<N; i++){
        if (X[i]<menor_valor){
            menor_valor = X[i];
            posicao = i;
        }
    }
    printf("Menor valor: %d\n", menor_valor);
    printf("Posicao: %d\n", posicao);
 
    return 0;
}
