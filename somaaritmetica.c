#include <stdio.h>
#include<stdlib.h>

int main (void){
	float N1, N2, N3, N4, R;
	
	printf("Digite a primeira nota:");
	scanf("%f",&N1);
    printf("Digite a segunda nota:");
	scanf("%f",&N2);
	printf("Digite a tercera nota:");
	scanf("%f",&N3);
	printf("Digite a quarta nota:");
	scanf("%f",&N4);
	
	R = (N1 + N2 + N3 + N4) / 4;
	
	printf("A media dos quatros valores  eh: %.1f ", R);
	
	

	return 0;
}