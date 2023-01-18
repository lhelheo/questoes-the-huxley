/* A Subindo Bem Confortavelmente (SBC) é uma empresa tradicional, com mais de 50 anos de experiência na fabricação de elevadores.
Todos os projetos da SBC seguem as mais estritas normas de segurança, 
mas infelizmente uma série de acidentes com seus elevadores manchou a reputação da empresa. 
Ao estudar os acidentes, os engenheiros da companhia concluíram que, em vários casos, o acidente foi causado pelo excesso de passageiros no elevador.
Por isso, a SBC decidiu fiscalizar com mais rigor o uso de seus elevadores: 
foi instalado um sensor em cada porta que detecta a quantidade de pessoas que saem e entram em cada andar do elevador. 
A SBC tem os registros do sensor de todo um dia de funcionamento do elevador (que sempre começa vazio). 
Eles sabem que as pessoas são educadas e sempre deixam todos os passageiros que irão sair em um andar saírem antes de outros passageiros entrarem no elevador,
mas ainda assim eles têm tido dificuldade em decidir se a capacidade máxima do elevador foi excedida ou não.
Escreva um programa que, dada uma sequência de leituras do sensor e a capacidade máxima do elevador, 
determina se a capacidade máxima do elevador foi excedida em algum momento. 


Formato de entrada
A primeira linha da entrada contém dois inteiros N e C, indicando o número de leituras realizadas pelo sensor e a capacidade máxima do elevador, 
respectivamente (1 <= N <= 1000 e 1 <= C <= 1000). As N linhas seguintes contêm, cada uma, uma leitura do sensor. 
Cada uma dessas linhas contém dois inteiros S e E, indicando quantas pessoas saíram e quantas pessoas entraram naquele andar, 
respectivamente (0 <= S <= 1000 e 0 <= E <= 1000).

Formato de saída
Seu programa deve imprimir uma única linha contendo o caractere 'S', caso a capacidade do elevador tenha sido excedida em algum momento, 
ou o caractere 'N' caso contrário.*/

#include <stdio.h>

int main(){
    int L, C, i, cont = 0 , R = 0;
    int E=0, S=0;
    char sim = 'S', nao = 'N';

    scanf("%d %d", &L,&C);
    for(int i= 0; i < L; i++){
        scanf("%d %d", &S,&E);
        R = R+E-S; 
        if(R > C){
            cont++;
        }
    }
    if(cont > 0){
        printf("%c\n",sim);
    }
    else{
        printf("%c\n",nao);
    }
}
