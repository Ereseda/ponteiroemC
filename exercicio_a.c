#include <stdio.h>
#include <locale.h>
/*
	LER UMA TEMPERATURA EM GRAUS CELSIUS E APRESEN�-LA CONVERTIDA EM GRAUS 
	FAHRENHEIT. A F�RMULA DE CONVERS�O �:
	F <- C * 9/5 +32, SENDO F A TEMPERATURA EM FAHRENHEIT E C A TEMPERATURA EM
	 CELSIUS.*/
	// Exerc�cio realizado no dia 20/02/2023 �s  17:43 by Eli Santos
	
	int main(void){
		
		float c,f;
		setlocale(LC_ALL,"Portuguese"); 
		printf("\n");
		printf(" Digite o valor em graus celsius:");
		scanf("%f", &c);
		
		//	f = c * 9 / 5 + 32;
	    f =(9 * c+ 160)/5;
		
		printf(" A temperatura em fahenheit � de : %.2f", f);
		printf("\n");
		return 0;
		
	}