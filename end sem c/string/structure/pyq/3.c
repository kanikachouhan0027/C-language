#include<stdio.h>
void swap(int *x,int *y);
int main(){
    int x=10;
    int y=20;
    swap(&x,&y);
    printf("%d %d",x,y);

}
void swap(int *x,int *y){
    *x=*x+*y;
    *y=*x - *y;
    *x=*x-*y ;
}