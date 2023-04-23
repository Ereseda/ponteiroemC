#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#define TAMANHO 100
/*
    5 - Crie um programa com uma struct para armazenar as informações
     de carros em uma garagem de venda de veículos. Crie uma função
     externa ao main  para realizar o cadastro de um automóvel e outra
     para edição dos dados de um automóvel. A variável do tipo struct
     de tamanho 100 deve obrigatoriamente ser declarada na main e
     passada como referência para a função.
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
