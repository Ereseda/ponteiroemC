#include<stdio.h>
#include<stdlib.h>
// https://www.youtube.com/watch?v=NPd38oeO1Js
//             Aula 99: Como criar um vetor?

int main(){
	int i;
//	int idade;
	//char sexo;
	//float n1;
	
	//int num1[10];// Essa é uma forma de trabalhar com vetor
	int num2 [] = {1,5, 9,15,43};//outra forma de trabalhar com vetor
	//int num3 [5] = {4,7,5,0,0};
	//int num4 [5] = {1,2,3,4,5,6};
	//int num5 [5] = {0};
	
	//char letras[100];
	char vogais[5]= {'a','e','i','o','u'};// precisa envolver os caracteres com aspas simples
	float notas [3] = {7.5,8.3, 9.5 };
	
	//printf("%d", num2[0]);// esse exemplo não é eficiente para  mais de 100 por exemplo
	//printf("%d", num2[1]);
	
	for(i = 0; i < 5; i++)
		printf("%d ", num2[i]);
        printf("\n");
	
	for(i = 0; i <5; i ++)
		printf("%c ", vogais[i]);
		printf("\n");
	for(i = 0; i< 3; i++)
		printf("%.2f ", notas[i]);
	return 0;
}