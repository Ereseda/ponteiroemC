//https://www.youtube.com/watch?v=-QH_nOEyhQw&list=PLq9Cyb1IlgfQi5hSyvhPTAmU-9aygyKST
//Arquivos em C - Escrever/ ler/ excluir/listar
//27/02/2023 9:45

#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

typedef struct data DATA;
struct data{
	int dia;
	int mes;
	int ano;
};

typedef struct contato CONTATO;
struct contato{
	char nome[50];
	char fone[15];
	DATA aniv;
};

//Criação do cabeçalho
void cabecalho();
void inserir();

int main(){
	setlocale(LC_ALL,"Portuguese");
	int opcao;
	do{
		cabecalho();
		printf("\n");
		printf(" 1 - Inserir\n");
		printf(" 2 - Remover\n");
		printf(" 3 - Pesquisar pelo nome\n");
		printf(" 4 - Listar\n");
		printf(" 5 - Listar pela inicial\n");
		printf(" 6 - Imprimir aniversariante do mês\n");
		printf(" 7 - Sair\n\n");
		printf("Digite uma opção:\n");
		scanf("%d", &opcao);
		
		switch(opcao){
			 case 1:
			 	//inserir
			 	inserir();
				break;
 	 	 	 case 2:
 	 	 	 	//remover
				break;
             case 3:
             	//pesquisar
				break;
			 case 4:
			 	//listar
				break;
			 case 5:
			 	//listar pelo
				break;
			 case 6:
			 	//imprimir
				break;
			 case 7:
			 	printf("Obrigado pela visita!\n");
			 	getch();
				break;
			default:
				printf("Opção inválida.\n");
				getch();
		}
	}while(opcao != 7);
	printf("\n");
	return 0;
}

void cabecalho(){
	system("cls");
	printf("----------------------------------------\n");
	printf("          AGENDA ELETRÔNCA              \n");
    printf("----------------------------------------\n");
}

void inserir(){
	
	FILE* arquivo;//pode ser qualquer nome
	CONTATO ctt;
	
	arquivo = fopen("agenda.txt", "ab");
	if(arquivo == NULL){
		printf("Problema na abertura do arquivo!\n");
	}else{
		do{
		
			fflush(stdin);
            cabecalho();
			
			printf("Digite o nome: ");
			gets(&ctt.nome);
			
		 	printf("Digite o fone: ");
			gets(&ctt.fone);
			
			printf("Digite o aniversário.");
			scanf("%d %d %d", &ctt.aniv.dia, &ctt.aniv.mes, &ctt.aniv.ano);
			
			fwrite(&ctt,sizeof(CONTATO),1,arquivo);
			
			printf("Deseja continuar?(s\n)");
		}while(getche() == 's');

	}
	fclose(arquivo);
}