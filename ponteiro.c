#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

typedef struct sPessoa{
    char primNome[21];
    char ultNome[21];
    int idade;
}Pessoa;
int main(){
    setlocale(LC_ALL,"Portuguese");
    Pessoa pes;
    Pessoa *ptrPes;
    ptrPes = &pes;
    strcpy(pes.primNome, "João");
    strcpy(ptrPes->ultNome, "Silva");
    ptrPes->idade = 20;
    printf(" %s", pes.primNome);
    printf("\n %s", ptrPes->ultNome);
    return 0;
}
