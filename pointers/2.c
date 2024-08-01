#include <stdio.h>
void sum(int a,int b,int *avg,int*s,int *prod);
int main(){
    int a=10;
    int b=20;
    int avg;
    int s;
    int prod;
    sum(a,b,&avg,&s,&prod);  
   printf("%d %d %d",s,prod,avg);      

}
void sum(int a,int b,int *avg,int*s,int *prod){
    *s=a+b;
    *avg=(a+b)/2;
    *prod=a*b;
}