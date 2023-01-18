/* Descrição
Seu objetivo é determinar o maior múltiplo de um inteiro dado menor do que ou igual a um outro inteiro dado

Formato de entrada
Consiste de dois inteiros positivos M e N.

Formato de saída
A saída consiste do maior número que seja múltiplo de M e menor ou igual a N, 
se não houver um múltiplo de M menor ou igual a N você deve imprimir "sem multiplos menores que N", sem as aspas, 
onde N deve ser substituído pelo valor de entrada N. */

#include <stdio.h>
int maximo(int a, int b) {
    return (b/a)*a;
}

int main(){
    int M,N;
    scanf("%d", &M);
    scanf("%d", &N);
    
    if(2*M > N){
        printf("sem multiplos menores que %d",N);
    }
    else{
        printf("%d", maximo(M,N));
        }
            return 0; 
}
