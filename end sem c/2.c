#include<stdio.h>
int sum(int x,int s);
int main(){
    int n;
    int s=0;
    printf("enter the number:");
    scanf("%d",&n);
   int p= sum(n,s);
    printf("%d",p);
}

int sum(int x,int s){
    
    if (x==0){
        return s;
    }
    else{
        s=s+x;
        sum(x-1,s);
    }
}