#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//atividade do dia 08/03/2023
//ENUNCIADO:
/*
	1 - FA�A UM PROGRAMA QUE PREENCHA UM VETOR DE INTEIROS DE TAMANHO 10 PEDINDO
	VALORES AO USU�RIO. EM SEGUIDA CALCULE E SALVE NUM SEGUNDO VETOR O QUADRADO
	DE CADA ELEMENTO DO PRIMEIRO VETOR. POR FIM IMPRIMA OS DOIS VALORES.
*/

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	//DECLARA��O
	int i, vet1[10], vet2[10];	
	printf("\n");
	
	//ENTRADA DE VALORES
	for(i = 0; i< 10; i ++){
		printf(" Digite o valor da posi��o %d: ", i);
		scanf("%d", &vet1[i]);		
	}
	
	//PROCESSAMENTO DA OPERA��O
	for(i = 0; i < 10; i ++)		
		vet2[i] = vet1[i] * vet1[i];
		printf("\n");
		
	//RESULTADOS DA OPERA��O
	printf(" Vetor1:");
	for(i = 0; i < 10; i ++)
		printf("%2d ", vet1[i]);
	printf("\n");
	printf(" Vetor2:");
	for(i = 0; i < 10; i ++)
		printf("%2d ", vet2[i]);
	printf("\n");	
	return 0;
}