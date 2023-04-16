#include<stdio.h>

void imprimirMat(int mat[TAM][TAM], int lin, int col){
    for(int i = 0; i < lin; i++){
        for(int j = 0; j <col; j++){
            printf("%d\t", mat[i][j])
        }
        printf("\n");
    }
}

int main(void){
    int mat[TAM][TAM];
    int produto, resto, op, p,q;
    int vetor[COL];
    preencherMat(mat,5,5);
    imprimirMat(mat,5,5);
    system("pause");
    return 0;
}
