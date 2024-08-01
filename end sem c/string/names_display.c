#include<stdio.h>
int main(){
    char first[]="kanika";
    char last[]="chouhan";
    for (int i =0; ;i++){
        if (first[i]=='\0'){
            break;
        }
        else{
            printf("%c",first[i]);
        }
    }
}