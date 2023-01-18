/* Descrição
Seu programa deve receber um vetor de N valores inteiros e imprimir na ordem inversa.

Formato de entrada
Na primeira linha de entrada o programa recebe um valor inteiro N de entrada. 
A segunda linha contém N inteiros separados por espaço contendo os valores do array.

Formato de saída
Uma linha contendo os números do vetor em ordem invertida separados por espaços em branco, seguida de um final de linha.
Depois do último número, não deve existir um espaço em branco.*/

#include <stdio.h>

int main(){
    int length;
    int i;

    scanf("%d", &length);
    int vetor1[length];

    for(i = 1; i < length+1 ; i++){
        scanf("%d", &vetor1[i]); 
    }

    for(length ; length > 0 ; length--){
        printf("%d ",vetor1[length]);
    }
    return 0;    
}
