#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


// Atividade executada dia: 02/03/2023 ás 08:52

int main(){
    setlocale(LC_ALL, "Portuguese");
	printf("\n");
	printf("*********************************************************************\n");
	printf("*                     EXERCÍCIO DA LISTA-3                          *\n");	
    printf("*                                                                   *\n");
    printf("*   2- FAÇA UM PROGRAMA QUE CALCULA E ESCREVE A SEGUINTE SOMA.      *\n");
	printf("*      1/1 + 3/2 + 5/3 + 7/4 + ...+ 99/50.                          *\n");
	printf("*                                                                   *\n");
	printf("*********************************************************************\n");
	
	
	int numerador = -1;
	int denominador;
	float resp = 0;
	
	printf("\n");
	
	for(denominador = 1; denominador <= 50; denominador++){
		numerador = numerador + 2;
		resp = resp + (numerador/denominador);
	}
	
	printf(" O resultado será: %.2f", resp);
	
	printf("\n");
	return 0;
}