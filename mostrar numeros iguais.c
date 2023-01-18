/* Descrição
A coordenação do curso de Ciência da Computação da UFAL deseja saber quantos alunos estão cursando ao mesmo tempo as cadeiras de Programação II e 
Programação III. Faça um programa que leia os códigos de matrícula dos alunos de ambos os cursos e imprima os códigos de matrículas dos alunos que
estão cursando ambas as disciplinas.
Sabe-se que a disciplina de Programação II conta com 45 alunos e a disciplina de Programação III conta com 30 alunos.

Formato de entrada
Uma sequência de 45 inteiros representando as matrículas dos alunos cursando a disciplina de Programação II, 
seguida de uma sequência de 30 inteiros representando as matrículas dos alunos que cursam a disciplina de Programação III.

Formato de saída
Uma lista de inteiros correspondendo aos alunos que estão matriculados em ambas as disciplinas.
Cada inteiro deve ser separado por um espaço. Após o último inteiro, deve existir um espaço seguido de um final de linha.
As matrículas devem ser impressas de acordo com a ordem dada na entrada da disciplina de Programação II. */

#include <stdio.h>
#include <string.h>

int main(){

    char texto[100];
    char texto2[100];
    int i, j, contador=0;
    char a[] = "aA";

    printf("Digite a frase\n");
    fgets(texto,100,stdin);
    fgets(texto2,100,stdin);

    for (i=0 ; i < strlen(texto) ; i++){
        for (j=0; j < strlen(a); j++) {
            if (texto[i] == a[j]){
                contador++;
            }
        }
    }

    printf("%d", contador);
    return 0;
}
