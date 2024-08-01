#include<stdio.h>
int reverse(int *ex,int n);
void swap(int *x,int *y);
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=7;
    reverse(arr,n);
    for (int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
int reverse(int *ex,int n){
    for(int i=0;i<n/2;i++){
        int x=*(ex+i);
        int y=*(ex+(n-i-1));
     swap(&x,&y);
     *(ex+i)=x;
     *(ex+(n-i-1))=y;
    
    }
}
void swap(int *x,int *y){
   int t=*x;
   *x=*y;
   *y=t;
    

}