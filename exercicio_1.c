#include <stdio.h>
#include<stdlib.h>
#define MAX_TAM 10

typedef struct sLista{
    char elem[MAX_TAM];
    int ultimo;
}Lista;
//Inicializar a lista
void inicializarLista(Lista *lista){
    lista->ultimo = -1;
}
/*
Lista *lista = (Lista*)malloc(sizeof(Lista));
inicializarLista(lista);*/

//Verificar se a lista está cheia
int listaCheia(Lista * lista){
    if(lista->ultimo == (MAX_TAM -1)){
        return 1;
    }
    return 0;
}
//Verificar se a lista está vazia

int listaVazia(Lista *lista){
    if(lista->ultimo == -1){
        return 1;
    }
    return 0;
}
//inserir um elemento no fim da lista
int inserirFim(Lista *lista, char elemento){
    //verifica se alista está cheia
    if(listaCheia(lista)){
        printf("ERRO: lista cheia!\n");
        return 0;
    }
    lista->elem[lista->ultimo +1] = elemento;
    lista ->ultimo++;;
    return 1;
}
