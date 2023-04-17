#include<stdio.h>
//https://www.youtube.com/watch?v=EZ2yTJqQ43Y
//
int main(void){
    int *p = (int*)malloc(sizeof(int));
   // *p = 1000;
    printf("%i", *p);
    return 0;
}
