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