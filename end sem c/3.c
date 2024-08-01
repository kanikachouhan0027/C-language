#include<stdio.h>
int fact(int n,int p);
int main(){
    int n=10;
    int p=1;
    int c=fact(n,p);
    printf("%d",c);
}
int fact(int n,int p){
    if (n==1){
        return p;
    }
    else{
        p=p*n;
        fact(n-1,p);
    }
}