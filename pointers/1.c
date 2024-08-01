#include <stdio.h>
int main(){
    int *tyu;
    int x;
    *tyu=&x;
    x=10;
    printf("%u",tyu);

}
