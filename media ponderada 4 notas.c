#include <stdio.h>

float media(float a, float b,float c, float d) {
    return ((a+(b*2)+(c*3)+(d*4))/10);
}

int main(){
    float n1,n2,n3,n4;
    scanf("%f%f%f%f", &n1,&n2,&n3,&n4);

    if (media(n1,n2,n3,n4) >= 9) {
        printf("aprovado com louvor");
    }

    else if (media(n1,n2,n3,n4) >= 7) {
        printf("aprovado");
    }

    else if (media(n1,n2,n3,n4) >= 3) {
        printf("prova final");
    }

    else {
        printf("reprovado");
    }
    return 0;    
}