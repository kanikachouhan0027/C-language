#include<stdio.h>
int main(){
    int marks[2][3];
    for (int i=0;i<=2;i++){
        printf("marks of student %d:\n ",i);
      for (int j=0;j<=3;j++){
        printf("enter marks of subjects:\n ");
        scanf("%d",&marks[i][j]);
        
      }
    }
}