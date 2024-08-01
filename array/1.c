#include<stdio.h>
int odd(int test[],int size,int *c);
int main (){
    int arr[5];
    arr[0]=1;
arr[1]=1;
arr[2]=2;
arr[3]=3;
arr[4]=4;
int n=5;
int count =0;
printf("%d",odd( arr,n,&count));


}
int odd(int test[],int size,int *c){
    for (int i=0;i<size;i++){
        if (test[i]%2==0){
            *c+=1;

        }
    }
    return *c;
}