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
        printf("Não foi possível alocar memória.\n");
        exit(0);
    }
    return 0;
}
