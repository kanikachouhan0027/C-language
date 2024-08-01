#include<stdio.h>
int main(){
    int i=-1,j=0,k=3,m;
    m=i++ && ++j||k++;
    printf("%d %d %d %d",m,i,k,j);
    return 0;
}
