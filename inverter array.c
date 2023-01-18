#include <stdio.h>

int main(){
    int length;
    int i;

    scanf("%d", &length);
    int vetor1[length];

    for(i = 1; i < length+1 ; i++){
        scanf("%d", &vetor1[i]); 
    }

    for(length ; length > 0 ; length--){
        printf("%d ",vetor1[length]);
    }
    return 0;    
}
