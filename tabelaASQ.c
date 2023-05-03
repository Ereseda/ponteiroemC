#include <stdio.h>
int main(){
    int i = 0;
    while(i < 26){
        printf("%c\n",i + 'a');
        i++;
    }
    system("pause");
    return 0;
}
