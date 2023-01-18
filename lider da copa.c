/* Na Copa do Mundo, os times são organizados em grupos que disputam as vagas para a próxima fase. Para definir qual time será o líder do grupo,
primeiro analisa-se a quantidade de pontos. Em caso de empate, o próximo critério é o saldo de gols. 
Se mesmo assim não for possível definir, são considerados os gols feitos.

Escreva um programa que receba como entrada o nome e essas três informações de dois times, e exiba o nome do time vencedor do grupo (em letras minúsculas). Caso nenhum dos critérios seja capaz de definir o vencedor, o programa deverá exibir a mensagem EMPATE (em maiúsculas).

Formato de entrada
A entrada consiste em 8 valores, sendo um String, seguido por três inteiros, para um time, e depois o mesmo para o outro

Formato de saída
Um String em minúsculas com o nome do time vencedor, ou um String em maiúsculas com a palavra EMPATE.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void minusculo(char s1[], char s2[]){
    int i = 0;
    while(s1[i] != '\0'){
        s2[i] = tolower(s1[i]);
        i++;
    }
    s2[i] = '\0';
}

int main(){
    char time1[50], time2[50], vazio[50];
    int qtdA , saldoA , gfA , qtdB , saldoB, gfB, i;
    
    scanf("%s", time1);
    scanf("%d", &qtdA);
    scanf("%d", &saldoA);
    scanf("%d", &gfA);
    scanf("%s", time2);
    scanf("%d", &qtdB);
    scanf("%d", &saldoB);
    scanf("%d", &gfB);

    if(qtdA == qtdB){
        if(saldoA == saldoB){
            if(gfA == gfB){
                printf("EMPATE");
            }
            else if(gfA > gfB){
                minusculo(time1, vazio);
                printf("%s", vazio);
            }
            else{
                minusculo(time2, vazio);
                printf("%s", vazio);
            }
        }
        else if(saldoA > saldoB){
            minusculo(time1, vazio);
            printf("%s", vazio);
        }
        else{
            minusculo(time2, vazio);
            printf("%s", vazio);
        }
    }
    else if(qtdA > qtdB){
        minusculo(time1, vazio);
        printf("%s", vazio);
    }
    else{
        minusculo(time2, vazio);
        printf("%s", vazio);
    }   
    return 0;    
}
