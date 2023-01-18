/* Descrição
Faça um programa que leia quatro notas (valores reais) de um aluno, calcule sua média ponderada utilizando, respectivamente, 
os pesos 1, 2, 3 e 4 para cada nota e imprima uma mensagem dizendo se o aluno foi aprovado com louvor, aprovado, 
reprovado ou deverá fazer prova final. 
Na sua solução utilize uma função chamada AnalisarSituacao que receba 4 parâmetros (as 4 notas) e retorne a situação do aluno, 
conforme os seguintes critérios:


aprovado com louvor (média >= 9)
aprovado (média >= 7);
reprovado (média < 3);
prova final ( 3 <= média < 7).

Formato de entrada
4números reais em uma mesma linha separados por um um espaço em branco.

Formato de saída
Uma mensagem que pode ser um dos seguintes valores:
aprovado com louvor
aprovado
reprovado
prova final */

#include <stdio.h>

float media(float a, float b,float c, float d) {
    return ((a+(b*2)+(c*3)+(d*4))/10);
}

int main(){
    float n1,n2,n3,n4;
    scanf("%f%f%f%f", &n1,&n2,&n3,&n4);

    if (media(n1,n2,n3,n4) >= 9) {
        printf("aprovado com louvor");
    }

    else if (media(n1,n2,n3,n4) >= 7) {
        printf("aprovado");
    }

    else if (media(n1,n2,n3,n4) >= 3) {
        printf("prova final");
    }

    else {
        printf("reprovado");
    }
    return 0;    
}
