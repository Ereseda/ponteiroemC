#include <stdio.h>
#include <locale.h>

/* c - CLACULAR E APRESENTAR O VALOR DO VOLUME DE UMA LATA DE �LEO, UTILIZANDO
 A F�RMULA VOLUME <- 3.14159 *R ELEVADO 2 * ALTURA.
  // Exerc�cio realizado no dia 20/02/2023 �s 18:02 by Eli Santos
 */
int main(void){
	
	float raio, altura, volume;
	setlocale(LC_ALL,"Portuguese"); 
	printf(" Raio = "); scanf("%f",&raio);
	printf(" Altura ="); scanf("%f",&altura);
	
	volume = 3.14159 * raio *raio*altura;
	printf(" Volume = %.2f", volume);
	return 0;
	
}