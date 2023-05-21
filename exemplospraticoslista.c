#include <stdio.h>
#include <stdlib.h>

typedef struct sCell{
    int info;
    struct sCell *next;
}CELULA;

CELULA* criarCelula(){
    CELULA *nova = (CELULA*)malloc(sizeof(CELULA));
    return nova;
}void inicializarLista(CELULA **lista){
    (*lista) = NULL;
}
int listaVazia(CELULA **lista){
    if((*lista)== NULL){
        return 1;
    }
    return 0;
}

int inserirFim(CELULA **lista, int elemento){
    CELULA *novaCelula;
    CELULA *auxiliar;

    novaCelula = criarCelula();
    if(novaCelula == NULL){
        printf("\nERRO: Memóra Cheia");
        return 0;
    }
    novaCelula->info = elemento;
    novaCelula->next = NULL;
    //Se lista estiver vazia
    if(listaVazia(lista)){
        (*lista) = novaCelula;
        return 1;
    }
    //Auxiliar inicia busca pelo últmo elemento
    auxiliar = (*lista);
    //Procurar última célula
    while(auxiliar->next != NULL){
        auxiliar = auxiliar->next;
    }
    auxiliar->next = novaCelula;
    return 1;
}
//Inserir no início da lista
int inserirInicio(CELULA **lista, int elemento){
   CELULA *novaCelula = criarCelula();
   if(novaCelula == NULL){
    printf("\nERRO: Memória cheia.");
    return 0;
   }
   if(listaVazia(lista)){
    return inserirFim(lista, elemento);
   }
   novaCelula->info= elemento;
   novaCelula->next = (*lista);
   (*lista)= novaCelula;
   return 1;
}
//imprimir uma lista


void imprimirElemento(int elemento){
    printf("%d", elemento);
}

void imprimirLista(CELULA **lista){
    CELULA *auxiliar = (*lista);
    if(listaVazia(lista)){
        printf("\nLista Vazia.");
    }else{
        printf("\nLista: ");
        while(auxiliar != NULL){
            imprimirElemento(auxiliar->info);
            auxiliar = auxiliar->next;
        }
        printf("\n");
    }
}

int main(){
/*
    CELULA *q = criarCelula();
    free(q);*/
    CELULA *lista;
    inicializarLista(&lista);
    printf("\n%d", listaVazia(&lista));
    inserirFim(&lista, 1);
    imprimirLista(&lista);
    inserirFim(&lista, 2);
    imprimirLista(&lista);
    inserirInicio(&lista,0);
    imprimirLista(&lista);
    inserirInicio(&lista,-1);
    imprimirLista(&lista);
    inserirFim(&lista, 3);
    imprimirLista(&lista);
    inserirFim(&lista, 4);
    imprimirLista(&lista);
    inserirInicio(&lista, -2);
    imprimirLista(&lista);
    inserirInicio(&lista, -3);
    imprimirLista(&lista);
    inserirInicio(&lista, -4);
    imprimirLista(&lista);
    return 0;

}
