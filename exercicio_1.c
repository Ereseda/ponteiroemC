#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


typedef struct sPessoa{
	char nome[50];
	int matricula;
}PESSOA;

typedef struct sCell{
	PESSOA info;
	struct sCell *next;
}CELULA;


//void listaVazia();
void inserirFim();
void inserirInicio();
void imprimirLista();
void removerInicio();
void removerFim();
void pesquisarMatr();
void removerMatr();

void menu(){
	setlocale(LC_ALL,"Portuguese");
    printf("==================== MENU ====================\n");
    printf("  0 - SAIR\n");
    printf("  1 - VERIFICAR SE VAZIA\n");
    printf("  2 - INSERIR PESSOA NO FIM\n");
    printf("  3 - INSERIR PESSOA NO IN�CIO\n");
    printf("  4 - IMPRIMIR LISTA DE PESSOAS\n");
    printf("  5 - REMOVER PESSOA NO IN�CIO\n");
    printf("  6 - REMOVER PESSOA NO FIM\n");
    printf("  7 - PESQUISAR POR MATRICULAS\n");
    printf("  8 - REMOVER POR MATRICULA\n");
    printf("==============================================\n");
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int op;
    menu();
    printf("\n");
    printf(" Escolha uma op��o de 0 � 8: ");
	scanf("%d", &op);
	printf("\n");
	printf("===============================================\n");
	switch(op){
        case 0:
            printf(" \n At� logo... Obrigado por usar nosso sistema!\n");
            break;
        case 1:
            //listaVazia();
            printf("\n Colocar a fun��o verificar se vazia.\n");
            break;
        case 2:
           // inserirFim();
            printf("\n Inserir Pessoa no Fim.\n");
            break;
        case 3:
            //inserirInicio();
            printf("\n Inserir Pessoa no Inicio.\n");
            break;
        case 4:
            //imprimirLista();
            printf("\n Imprimir lista de Pessoas.\n");
            break;
        case 5:
            //removerInicio();
            printf("\n remover Pessoas no in�cio.\n");
            break;
        case 6:
            //removerFim();
            printf("\n Remover Pessoa no fim.\n");
            break;
        case 7:
            //pesquisarMatr();
            printf("\n Pesquisar por matricula.\n");
            break;
        case 8:
           // removerMatr();
            printf("\nRemover por matricula.\n");
            break;
        default:
            printf("Op��o Inv�lida!");
            break;
	}
   return 0;
}


CELULA *criarCelula(){
    CELULA* nova=(CELULA*)malloc(sizeof(CELULA));
    return nova;
}
void inicializarLista(CELULA **lista){
    (*lista)= NULL;
}

//Verificar se a lista est� vazia

int listaVazia(CELULA **lista){
    if((*lista)==NULL){
        if((*lista)==NULL){
            printf("\nLista est� vazia!");
            return 1;
        }
        printf("\nLista n�o est� vazia!");
        return 0;
    }

}
/*
int inserirFim(CELULA **lista, PESSOA elemento){
    CELULA *novaCelula;//Armazena end. nova
    CELULA *auxiliar; //Utilizado p/ percorrer

    //Aloca o espa�o na mem. para novaCelula
    novaCelula = criarCelula();
    if(novaCelula == NULL){
    printf("\nERRO: Mem�ria Cheia");
    return 0;
    }
    //Colocando elemento dentro da c�lula
    novaCelula->info = elemento;
    novaCelula-> next = NULL;
    //Se lista estiver vazia
    if(listaVazia(lista)){
    (*lista) = novaCelula;
    return 1;
    }
    //Auxiliar inicia busca pelo �ltimo
    auxiliar = (*lista);
    //Procurar �ltima c�lula
    while(auxiliar->next != NULL){
        auxiliar = auxiliar->next;
    }
    auxiliar->next = novaCelula;
    return 1;
}*/
/*
//Inserir no in�cio da lista
int inserirInicio(CELULA **lista, PESSOA elemento){
    CELULA *novaCelula = criarCelula();
    if(novaCelula == NULL){
        printf("\nERRO: Mem�ria Cheia");
        return 0;
    }
    if(listaVazia(lista)){
        //�timo, chama fun��o inserir fim.
        return inserirFim(lista, elemento);
    }
    //Preenche a nova celula com o elemento.
    novaCelula->info = elemento;
    //next deve apontar para a primeira c�lula.
    novaCelula->next = (*lista);
    (*lista)=novaCelula;
    return 1;
}
*/

//Imprimir uma lista
/*
void imprimirLista(CELULA **lista){
    CELULA *auxiliar = (*lista);
    if(listaVazia(lista)){
        printf("\nLista Vazia.");
    }else{
        printf("\nLista:");
        while(auxiliar != NULL){
            imprimirElemento(auxiliar->info);
            auxiliar = auxiliar->next;
        }
        printf("\n");
    }
}
*/
/*
    void imprimirElemento(PESSOA elemento){
        printf("\nMatricula: %d \tNome: %s", elemento.matricula,elemento.nome);
    }
    */

    /*

       // Remover In�cio
 PESSOA removerInicio(CELULA **lista){
    //Ponteiro para armazenar o end. da
    //c�lula a ser exclu�da.
  CELULA *removida;

    //Elemento vazio
    PESSOA removido;
    strcpy(removido.nome, " ");
    removido.matricula = -1;

    //Se lista vazia, ent�o n�o remove
    if(listaVazia(lista)){
        printf("\nERRO: Lista vazia");
        return removido;
    }
    //Guarda end. 1 elemento
    removida = (*lista);
    removido = removida->info;

    //Faz a lista apontar para 2 elemento.
    (*lista) = (*lista)->next;

    //Remove o antigo 1 elemento
    free(removida);
    return removido;
   }
*/


/*
//Remover no final
PESSOA removerFim(CELULA **lista){
    //Armazenar o endere�o do n� a ser removido
    CELULA *removida;

    //Guarda o endere�o do n� que passar� a ser o �ltimo.
    CELULA *anterior;

    PESSOA removido = criarPessoa("", -1);
        if(listaVazia(lista)){
            printf("\nERRO: Lista vazia!\n");
            return removido;
        }
        //verifica se h� apenas 1 elemento.
        if((*lista)->next == NULL)
        return removerInicio(lista);

        //O ponteiro removida percorrer� a lista para encontrar
        // a posi��o onde dever� remover o item.
        removida = (*lista);
        while(removida->next !=NULL){
        anterior = removida;
        removida = removida->next;
        }
        removido = removida->info;
        anterior->next = NULL;
        free(removida);
        return removido;
}
*/

/*
//Pesquisar pela matricula
CELULA *pesquisarMatr(CELULA **lista, int mat){
    CELULA *auxiliar;

    if(listaVazia(lista)){
        printf("ERRO: Lista vazia.\n");
        return NULL;
    }
    auxiliar = (*lista);//Recebe o primeiro elemento da lista.
    while(auxiliar != NULL){
        if(auxiliar != NULL){
            if(auxiliar->info.matricula == mat)
            return auxiliar;
            //se n�o encontrou, continuar procurando.
            auxiliar = auxiliar->next;
        }
        return NULL; //Caso em que n�o h� o elemento procurado
    }
*/



/*
//Remover pela matricula
PESSOA removerMatr(CELULA **lista, int mat){
    CELULA *removida;
    CELULA *anterior;
    PESSOA pRemover = criarPessoa(" ", -1);

    if(listaVazia(lista)){
        printf("\nERRo: Lista Vazia");
        return pRemover;
    }
    //Pesquisa pela matricula
    removida = pesquisarMatr(lista,mat);
    if(removida == NULL){
        printf("\nERRo: Matricula n�o encontrada");
        return pRemover;
    }
    //Caso seja o primeiro elemento
    if(removida ==(*lista)){
        return removerInicio(lista);
    }
    //Copia o conteudo da celula a ser removida
    //Como sei esse conte�do? pela fun��o pesquisaMat
    pRemover = removida->info;

    anterior =(*lista);
    //Encontra c�lula/ n� anterior ao que ser� removido
    while(anterior->next != removida){
        anterior = anterior->next;
    }
    //Movimenta o ponteiro. O anterior deve apontar
    //para onde o removida aponta.
    anterior->next = removida->next;
    free(removida);

    return pRemover;
}
*/
