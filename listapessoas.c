#include <stdio.h>
#include <stdlib.h>

typedef struct sPessoa{
    char nome[50];
    int matricula;
}PESSOA;

typedef struct sCell{
    PESSOA info;
    struct sCell *next;
}CELULA;
PESSOA* criarPessoa(){
    PESSOA *nova = (PESSOA*)malloc(sizeof(PESSOA));
    return nova;
}
//PESSOA *q = criarPessoa();

void imprimirElemento(PESSOA elemento){
    printf("\nMatricula: %d\tNome: %s");
}

PESSOA removerInicio(CELULA **lista){
    CELULA *removida;

    PESSOA removido;
    strcpy(removido.nome, " ");
    removido.matricula = -1;

    if(listaVazia(lista)){
        printf("\nERRO: Lista vazia.");
        return removido;
    }
    removida = (*lista);
    removido = removida->info;

    (*lista) = (*lista)->next;
    free(removida);
    return removido;
}

PESSOA removerFim(CELULA **lista){
    CELULA *removida;
    CELULA *anterior;

    PESSOA removido = criarPessoa("", -1);
    if(listaVazia(lista)){
        printf("ERRO: lista vazia!\n");
        return removido;
    }
    if((*lista)->next == NULL)
        return removerInicio(lista);
    removida = (*lista);
    while(removida->next!= NULL){
        anterior = removida;
        removida = removida->next;
    }
    removido = removida->info;
    anterior->next = NULL;
    free(removida);
    return removido;
}
CELULA *pesquisarMatricula(CELULA **lista,int mat){
    CELULA *auxiliar;

    if(listaVazia(lista)){
        printf("ERRO:Lista vazia.\n");
        return NULL;
    }
    auxiliar = (*lista);
    while(auxiliar != NULL){
        if(auxiliar->info.matricula == mat)
            return auxiliar;
        auxiliar = auxiliar-> next;
    }
    return NULL;
}
PESSOA removerMatr(CELULA **lista, int mat){
    CELULA *removida;
    CELULA *anterior;
    PESSOA pRemover = criarPessoa(" ", -1);

    if(listaVazia(lista)){
        printf("\nERRo: Lista Vazia.");
        return pRemover;
    }
    removida = pesquisarMatr(lista, mat);
    if(removida == NULL){
        printf("\nERRO> Matricula não encontrada");
        return ´pRemover;
    }
    if(removida ==(*lista)){
        return removerInicio(lista);
    }
    pRemover = removida->info;
    anterior = (*lista);

    while(anterior-> next != removida){
        anterior = anterior->next;
    }
    anterior->next = removida->next;
    free(removida);
    return pRemover;
}

int main(){
    PESSOA temp;
    CELULA *ptrlista, *tempCel;
    inicializarLista(&ptrlista);

    strcpy(temp.nome, "José");
    temp.matricula = 1;

    tempCel = pesquisarMatr(&ptrlista, 2);
    (tempCel != NULL)?printf("\nEncontrada"):printf("\Não Encontrada");

    inserirFim(&ptrlista, temp);
    imprimirlista(&ptrlista);

    tempCel = pesquisarMatr(&ptrlista, 2);
    (tempCel != NULL)?printf("\nMat. Encontrada");printf("\Mat. não encontrada");

    strcpy(temp.nome, "Maria");
    temp.matricula = 2;

    inserirFim(&ptrlista, temp);
    imprimirLista(&ptrlista);


    strcpy(temp.nome, "João");
    temp.matricula = 4;

    tempCel = pesquisarMatr(&ptrlista, 2);
    (tempCel != NULL)?printf("Encontrada"):printf("N encontrada");

    inserirInicio(&ptrlista, temp);
    imprimirLista(&ptrlista);

    temp = removerMatr(&ptrlista, 4);
    imprimirLista(&ptrlista);

    liberaLista(&ptrlista);
    imprimirLista(&ptrlista);

    return 0;
}
