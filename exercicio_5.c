#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#define TAMANHO 100
/*
    5 - Crie um programa com uma struct para armazenar as informa��es
     de carros em uma garagem de venda de ve�culos. Crie uma fun��o
     externa ao main  para realizar o cadastro de um autom�vel e outra
     para edi��o dos dados de um autom�vel. A vari�vel do tipo struct
     de tamanho 100 deve obrigatoriamente ser declarada na main e
     passada como refer�ncia para a fun��o.
*/

void cadastrar();
typedef struct sCarro
{
	char nome[50];
	int ano;
	char modelo[50];
	char cor[50];
	
}CARRO;

int main(){
	setlocale(LC_ALL,"Portuguese");
    return 0;
}

void cadastar(){
	CARRO car[100];
	
}
