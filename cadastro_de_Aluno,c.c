#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

void menu();

int main(){
    menu();
    return 0;
}
void menu(){
     int op;
    do{
    printf("////////////////////////////////////////////////////////////////////\n");
    printf("//                                                                //\n");
    printf("//                      MENU DE OP��ES                            //\n");
    printf("//                                                                //\n");
    printf("//   0 - Sair                                                     //\n");
    printf("//   1 - Incluir Aluno                                            //\n");
    printf("//   2 - listar Aluno                                             //\n");
    printf("//   3 - Excluir Aluno                                            //\n");
    printf("//   4 - Editar Aluno                                             //\n");
    printf("//   5 - Informa��es do Sistema                                   //\n");
    printf("//                                                                //\n");
    printf("////////////////////////////////////////////////////////////////////\n");
    printf("\n");

    printf("Digite uma op��o:  ");
    scanf("%d",&op);

    switch(op){
    case 0:
        printf("\nObrigado por usar  nosso sistema");
        break;
    case 1:
        //cadastrarCliente();
        break;
    case 2:
        printf("Listar Clientes: ");
        break;
    case 3:
        printf("Excluir Clientes: ");
        break;
    case 4:
        printf(" Obrigado pela visita.");
        //getch();
        break;
    default:
        printf("Op��o inv�lida: ");
        //getch();
        break;
    }
    }while(op != 4);
}
