#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//Fazer um cadastro de curr�culo em linguagem C.
/*
void cadastro(){

    char nome[50],endereco[50],email[50];
    int telefone[15];


    printf("Digite o nome do candidato: ");
 	scanf("%c",&nome);
 	printf("\n");
 	printf("Digite o Endere�o: ");
 	scanf("%c",&endereco);
 	printf("\n");
 	printf("Digite o email: ");
 	scanf("%c",&email);
 	printf("\n");
 	printf("Digite o telefone: ");
 	scanf("%d",&telefone);
 	printf("\n");

}
void menu(){

}*/
int main(){

    int opcao;
    setlocale(LC_ALL,"Portuguese");
    printf("***************************************************\n");
    printf("*                    MENU DE OP��ES               *\n");
    printf("*                                                 *\n");
    printf("*           1 - Cadastrar                         *\n");
    printf("*           2 - Imprimir                          *\n");
    printf("*           3 - Sair                              *\n");
    printf("*                                                 *\n");
    printf("***************************************************\n");
    printf("\n");

    printf(" Escolha uma op��o de 1  � 3: ");
	scanf("%d", &opcao);
	printf("\n");

    switch(opcao){
    case 1:
        cadastro();
        break;
    case 2:
        Imprimir();
        break;
    case 3:
        printf("Saindo...");
        break;
    default:
        printf("Op��o Inv�lida");
        break;

    }
    printf("\n");

    return 0;
}
