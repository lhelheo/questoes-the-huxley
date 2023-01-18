#include <stdio.h>
#include <string.h>

int main(){

    char texto[50];
    int i, j, contador=0;
    char a[] = "aA";

    printf("Digite a frase\n");
    fgets(texto,50,stdin);

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