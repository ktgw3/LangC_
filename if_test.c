#include<stdio.h>

int main(void){
    int e;

    printf("変数の値は：");
    scanf("%d",&e);
    if(e<10){
        printf("eは10未満です\n");
    }
    else {
        printf("eは10以上です\n");
    }
    return 0;
}