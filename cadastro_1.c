#include<stdio.h>

void menu();
void cadastro();
void pesquisar();
void listar();
int main(void){
    menu();
}
void menu(){
    int op;
    do{
             system("cls");
             printf("\n1 - Cadastrar Cliente\n2 - Pesquisar Cliente\n3 - Listar Cliente\n4 - Excluir Cliente\n0 - Sair\n");
             scanf("%d", &op);
             getchar();
             switch(op){
             case 1:
                break;
             case 2:
                break;
             case 3:
                break;
             case 4:
                break;
             }

    }while(op !=0);

}
void cadastro(){
}
void pesquisar(){
}
void listar(){
}
