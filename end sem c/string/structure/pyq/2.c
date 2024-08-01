#include<stdio.h>

int main(){
    int r[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n=3;
    int m=3;
    int t[3][3];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            t[i][j]=r[j][i];
        }
    }   
    printf("the transpose is : \n");
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("%d\t ",t[i][j]);
        }
        printf("\n");
    }
}