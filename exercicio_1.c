#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*
    1 - Faça um programa que leia dois valores inteiros, armazenando
    os em memória alocada dinamicamente e depois escreva-os na tela.

*/


int main(){

    int *ptr, i;

    //alocando espaço para 2 inteiros

    ptr = (int*)malloc(2 * sizeof(int));

    //armazeando os 2 inteiros no espaço alocado
    for(i = 0 ; i < 2; i++){
        printf("Entre com n[%d]: ", i+1);
        scanf("%d", &ptr[i]);
    }
    //mostrando os 2 inteiros
    for(i = 0 ; i < 2; i++){
        printf("%d  ", ptr[i]);
    }

    //desalocando o espaço utilizado anteriormente
    free(ptr);
    return 0;
}



