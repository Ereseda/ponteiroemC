#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//Informa��es baseada ao v�deo indicado abaixo
//https://www.youtube.com/watch?v=_byMWMrwEdU&t=7s
int main(void){
    int *x;
    setlocale(LC_ALL,"Portuguese");

    x = malloc(sizeof(int));

    if(x){
        printf("Mem�ria alocada com sucesso!");
    }else{
        printf("Erro ao alocar mem�ria!");
    }
    return 0;
}
