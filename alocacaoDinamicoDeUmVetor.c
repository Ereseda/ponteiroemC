#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, tam, *vet;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    srand(time(NULL));

    vet = malloc(tam *sizeof(int));

   if(vet){
    for(i = 0; i < tam; i++)
        *(vet + i) = rand() % 100;

     for(i = 0; i < tam; i++)
        printf("%d ", *(vet + i));
     }else{
         printf("Erro ao alocar mercdoria.\n");
     }
    return 0;
}
