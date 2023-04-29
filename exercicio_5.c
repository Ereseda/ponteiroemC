#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include <time.h>
//atividade do dia 08/03/2023
//ENUNCIADO:
/*
	5 - FAÇA UM PROGRAMA QUE RECEBA A TEMPERATURA MÉDIA DE CADA MÊS DO ANO, AR-
	MAZENANDO-AS EM UM VETOR. AO FINAL, MOSTRE A MAIOR E A MENOR TEMPERATURA
	DO ANO E EM QUE MÊS OCORRERAM( MOSTRA O MÊS POR EXTENSO: JANEIRO, FEVEREIRO..
	) DESCONSIDERE EMPATES.
*/
int main(){
	
	setlocale(LC_ALL,"Portuguese");
	int i, indiceMaior, indiceMenor;
	float menor = 99, maior = 0, temp[12];
	
	for( i = 0; i < 12; i ++){
		printf(" Digite a temperatura do mes %d: ", i+1);
		scanf("%f", &temp[i]);
	}
	for(i = 0; i < 12; i++){
		if(menor > temp[i]){
				menor = temp[i];
				indiceMenor = i;
		}
		
		if(maior < temp[i]){
				maior = temp[i];
				indiceMaior = i;
		}
		
	}
	printf(" A menor temperatura foi %.2f e ocorreu no mês", menor);
	switch(indiceMenor){
		case 0:
			printf("Janeiro\n");
			break;
		case 1:
			printf("Fevereiro\n");
			break;
		case 2:
			printf("Março\n");
			break;
		case 3:
			printf("Abril\n");
			break;
		case 4:
			printf("Maio\n");
			break;
		case 5:
			printf("Junho\n");
			break;
		case 6:
			printf("Julho\n");
			break;
		case 7:
			printf("Agosto\n");
			break;
		case 8:
			printf("Setembro\n");
			break;
		case 9: 
			printf("Outubro\n");
			break;
		case 10:
			printf("Novembro\n");
			break;
		case 11:
			printf("Dezembro\n");
			break;
	}
	
	
	printf(" A maior temperatura foi %.2f e ocorreu no mês ", maior);
	switch(indiceMaior){
		case 0:
			printf("Janeiro\n");
			break;
		case 1:
			printf("Fevereiro\n");
			break;
		case 2:
			printf("Março\n");
			break;
		case 3:
			printf("Abril\n");
			break;
		case 4:
			printf("Maio\n");
			break;
		case 5:
			printf("Junho\n");
			break;
		case 6:
			printf("Julho\n");
			break;
		case 7:
			printf("Agosto\n");
			break;
		case 8:
			printf("Setembro\n");
			break;
		case 9: 
			printf("Outubro\n");
			break;
		case 10:
			printf("Novembro\n");
			break;
		case 11:
			printf("Dezembro\n");
			break;
	}
	return 0;
}