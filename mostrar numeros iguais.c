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