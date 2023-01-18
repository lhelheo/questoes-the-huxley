/* Descrição
Eu sou fanático pela letra a. Para mim, é muito importante saber quantas vezes a letra a aparece em qualquer texto. 
Você pode me ajudar? Crie um programa que leia um texto qualquer e me diga quantas vezes a letra a aparece nele.
OBS: desconsidere acentos, como ã e à.

Formato de entrada
Uma linha com um texto qualquer, sem acentos.

Formato de saída
A quantidade de vezes que a letra a aparece no texto. */

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
