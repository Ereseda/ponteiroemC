#include<stdio.h>
#include<stdlib.h>

struct sEndereco{
    char rua[10];
    int numero;
};

int main(){
    struct sEndereco*pEnd;
    pEnd = (struct sEndereco *)malloc(sizeof(struct sEndereco));
    if(pEnd == NULL){
        printf("N�o foi poss�vel alocar mem�ria.\n");
        exit(0);
    }
    return 0;
}
