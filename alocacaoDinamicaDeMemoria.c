#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//Informações baseada ao vídeo indicado abaixo
//https://www.youtube.com/watch?v=_byMWMrwEdU&t=7s
int main(void){
    int *x;
    setlocale(LC_ALL,"Portuguese");

    x = malloc(sizeof(int));

    if(x){
        printf("Memória alocada com sucesso!");
    }else{
        printf("Erro ao alocar memória!");
    }
    return 0;
}
