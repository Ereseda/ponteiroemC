#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct sCell{
    int info;
    struct sCell *next;
}CELULA;

CELULA* criarCelula(){
    CELULA *nova = (CELULA*)malloc(sizeof(CELULA));
    return nova;
}

//Dentro de uma fun��o

//CELULA *q = criarCelula();
void inicializarLista(CELULA **lista){
    (*lista) = NULL;
}

//VERIFICAR SE ALISTA EST� VAZIA
int listaVazia(CELULA **lista){
    if((*lista)== NULL){
           // printf("\n ok a lista est� vazia.");
        return 1;
    }
    printf("\nA lista n�o est� vazia");
    return 0;
}
//INSERIR NO FIM DA LISTA
int inserirFim(CELULA **lista, int elemento){
    CELULA *novaCelula;//Armazena end.nova
    CELULA *auxiliar;

    //ALOCAR O ESPA�O NA ME. PARA NOVACELULA
    novaCelula = criarCelula();
    if(novaCelula == NULL){
        printf("\nERRO:Mem�ria Cheia");
        return 0;
    }
    //COLOCANDO  ELEMENTO DENTRO DA CELULA
    novaCelula->info = elemento;
    novaCelula->next = NULL;
//inserir no fim da lista(Parte II).
//se lista estiver vazia
        if(listaVazia(lista)){
        (*lista)=novaCelula;
        return 1;
    }
    //AUXILIAR INICIA BUSCA PELO �LTIMO ELEMENTO
    auxiliar = (*lista);

    //PROCURAR �LTIMA C�LULA
    while(auxiliar->next != NULL){
        auxiliar = auxiliar->next;
    }
    auxiliar-> next = novaCelula;
    return 1;
}

//INSERIR NO IN�CIO DA LISTA

int inserirInicio(CELULA **lista, int elemento){
    CELULA *novaCelula = criarCelula();
    if(novaCelula == NULL){
        printf("\nERRO: mem�ria cheia");
        return 0;
    }
    if(listaVazia(lista)){
        /*OTIMO, CHAMA FUN��O INSERIR FIM.*/
        return inserirFim(lista, elemento);
    }
    //PREENCHE A NOVA CELULA COM O ELEMENTO.
    novaCelula->info = elemento;
    //NEXT DEVE APONTAR PARA A PRIMEIRA C�LULA.
    novaCelula->next = (*lista);
    (*lista)= novaCelula;
    return 1;
}
void imprimirElemento(int elemento){
    printf("%d", elemento);
}
void imprimirLista(CELULA **lista){
    CELULA *auxiliar = (*lista);
    if(listaVazia (lista)){
        printf("\nLista Vazia.");
    }else{
        printf("\nLista ");
        while (auxiliar != NULL){
            imprimirElemento(auxiliar->info);
            auxiliar = auxiliar-> next;
        }
           printf("\n");
    }

}
int main(){
    setlocale(LC_ALL,"Portuguese");
    CELULA  *lista;
    inicializarLista(&lista);
    printf("\n", listaVazia(&lista));
    inserirFim(&lista, 1);
    imprimirLista(&lista);
    inserirFim(&lista, 2);
    imprimirLista(&lista);
    inserirInicio(&lista, 0);
    imprimirLista(&lista);
    inserirInicio(&lista, -1);
    imprimirLista(&lista);
    inserirFim(&lista, 3);
    imprimirLista(&lista);
    inserirInicio(&lista, -2);
    imprimirLista(&lista);
    inserirFim(&lista, 4);
    imprimirLista(&lista);

    return 0;



    /*
    PESSOA temp;
    CELULA *ptrlista, *temCel;
    inicializarLista(&ptrlista);

    strcpy(temp.nome, "Jos�");
    temp.matricula = 1;

    tempCel = pesquisarMatr(&ptrlista, 2);
    (tempCel != NULL)?printf("\nEncontrada"):printf("\nN�o Encontrada");

    inserirFim(&ptrlista, temp);
    imprimirlista(&ptrlista);

    tempCel = pesquisarMatr(&ptrlista, 2);
    (tempCel != NULL)?printf("\nMat. Encontrada"): printf("\nMat. n�o Encontrada");

    strcpy(temp.nome,"Maria");
    temp.matricula = 2;

    inserirFim(&ptrlista, temp);
    imprimirLista(&ptrlista);

    strcpy(temp.nome, "Jo�o");
    temp.matricula = 4;

    tempCel = pesquisarMatr(&ptrlista, 2);
    (tempCel != NULL)?printf("Encontrada"):printf("N�o concontrada");

    incerirInicio(&ptrlista, temp);
    imprimiorLista(ptrlista);

    temp = removerMatr(&ptrlista, 4);
    imprimirLista(&ptrlista);

    liberaLista(&ptrlista);
    imprimirLista(&ptrlista)
    */

    return 0;
}
