#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int *x;

    x = malloc(sizeof(int));
    if(x){
        printf("Mem�ria alocada com sucesso!\n");
        printf("x: %d\n", *x);
        *x = 50;
        printf("x: %d\n", *x);
    }else{
        printf("Erro ao alocar mem�ria.\n");
    }
    return 0;
}
