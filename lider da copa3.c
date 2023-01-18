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