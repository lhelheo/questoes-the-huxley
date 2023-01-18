/* Descrição
Escrever um programa que lê um número N. Este N é o tamanho de um array.

Em seguida, leia cada um dos N números do array, encontre o menor elemento desse array, a sua posição dentro do array e imprima essas informações.
Considere que o array começa na posição 0

Formato de entrada
A primeira linha da entrada contém um inteiro N (1 <N <1000), indicando o número de elementos que devem ser lidos no array de números inteiros. 
A segunda linha contém cada um dos valores de N, separadas por um espaço.
Obs: não haverão números repetidos.

Formato de saída
A primeira linha exibe a mensagem "Menor valor:" seguido por um espaço e o menor número lido na entrada. 
A segunda linha exibe a mensagem "POSIÇÃO:" seguido por um espaço e a posição do array em que o menor número é encontrado, 
lembrando que o array começa na posição zero. */

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
