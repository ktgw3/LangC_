#include<stdio.h>

int main(void){
    int i;

    for(i=1;i<=25;i++){
        if(i%3==0){
            printf("%d\n",i);
        }
    }
    i=26;
    while(i<=50){
        if(i%3==0){
            printf("%d\n",i);
        }
        i++;
    }

    return 0;
}