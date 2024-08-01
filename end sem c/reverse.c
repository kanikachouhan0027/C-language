#include<stdio.h>
int reverse(int *x,int *y);
int main(){
    int arr[5]={1,2,3,4,5};
for(int i=0; i < 5/2 ; i++){
    int x=arr[i];
    int y=arr[4-i];
   reverse(&x,&y);
    arr[i]=x;
    arr[4-i]=y;
}
for (int j=0;j<5;j++){
    printf("%d\n",arr[j]);
}
  
}
int reverse(int *x,int *y){
    int t= *x;
    *x= *y;
    *y= t;

}