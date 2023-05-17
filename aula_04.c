#include<stdio.h>

int main(){
    int n1, n2,m;
    printf("Digite dois números: ");
    scanf("%d", &n1);
    scanf("%d", &n2);

    m = n1 * n2;

    printf("Multiplicação = %d", m);
    return 0;
}
