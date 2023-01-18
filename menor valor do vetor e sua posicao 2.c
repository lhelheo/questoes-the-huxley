#include <stdio.h>

int main(){
    int TAM, i, menor, posMaior;
    scanf("%d", &TAM);
    int vet[TAM];

    for(i=0; i < TAM; i++){
        scanf("%d", &vet[i]);
    }

    menor      = vet[0];
    posMaior   = 0;
    for(i=1; i < TAM; i++){
        if(vet[i] < menor){
            menor    = vet[i]; 
            posMaior = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d", posMaior+1);
    return 0;
}