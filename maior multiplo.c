#include <stdio.h>
int maximo(int a, int b) {
    return (b/a)*a;
}

int main(){
    int M,N;
    scanf("%d", &M);
    scanf("%d", &N);
    
    if(2*M > N){
        printf("sem multiplos menores que %d",N);
    }
    else{
        printf("%d", maximo(M,N));
        }
            return 0; 
}