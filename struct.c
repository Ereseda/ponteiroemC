#include<stdio.h>
#define TAM 2
typedef struct sEnd{
    char logradouro[100];
    int numero;
    char bairro[50];
    char cep[10];
    char cidade[60];
    char estado[50];
}END;
typedef struct sCliente{
    char nome[100];
    char email[60];
    char tel[15];
    int idade;
    END endereco[2]
}CLIENTE;

int main(void){
    CLIENTE cli[TAM];
    int op, i;
    for(int i = 0;i < 2; i ++){

        printf("Entre com o nome do cliente: \n");
        scanf("%[^\n]", cli[i].nome);

        printf("Entre com o email do cliente: \n");
        scanf("%s", cli[i].email);

        printf("Entre com o telefone do cliente: \n");
        scanf("%s", cli[i].tel);

        printf("Entre com a idade do cliente: \n");
        scanf("%d", &cli[i].idade);

    }

    for(int j = 0; j < 2; j++){

        printf("Cadastrando endereco %d\n ", j + 1);

        printf("Entre com o logradouro do cliente: \n");
        scanf(" %[^\n]", cli[i].endereco[j].logradouro);

        printf("Para cadastrar outro endereço, digite: \n 1");
        scanf("%d", &op);

        if(op == 1)
            break;
    }

    for(int i = 0; i < 2; i++)
        printf("NOME: %s\n EMAIL: %s \nTEL: %s\n", cli[i].nome, cli[i].email, cli[i].tel);
    return 0;
}
