#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p;
    p = (int*)malloc(sizeof(int));
    if(p == NULL){
        printf("N�o foi poss�vel alocar mem�ria. \n");
        exit(0);
    }
    *p = 5;
    printf("%d\n", *p);
    free(p);
    return 0;
}
