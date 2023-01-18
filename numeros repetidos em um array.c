#include <stdio.h>

int i, a;
int vetor1[45], vetor2[30];

int main(void){
    for(i=0 ; i<44; i++){
        scanf("%d", &vetor1[i]);
    }
    for(i=0; i<29; i++){
        scanf("%d", &vetor2[i]);
    }
    for(i=0; i<44; i++){
        for(a=0; a<29; a++){
            if(vetor1[i] == vetor2[a]) printf("%d \n", vetor1[i]);
        }
    }
return 0;
}