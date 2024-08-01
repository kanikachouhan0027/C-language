#include<stdio.h>
int main(){
    printf("the series of prime numbers");
    for (int i=1;i<=30;i++){
        int count =0;
        for (int j=2;j<=i-1;j++){
             if (i%j==0){
                count=count+1;
             }
        }
        if (count==0){
            printf("%d\n",i);
        }
    }
}