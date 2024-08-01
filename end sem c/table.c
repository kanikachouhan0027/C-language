#include<stdio.h>
int main(){
int tan[2][11];
for (int i=0;i<2;i++){
    printf("table of % d is \n",i+2);
    for(int j=0;j<=11;j++){
        tan[i][j]=j*(i+2);
       // printf("  %d x %d =%d\n",i+2,j,(i+2)*j);
    } 
}
for (int x=0;x<2;x++){
    for(int y=0;y<11;y++){
        printf("%d\t",tan[x][y]);
    }
    printf("\n");
}
}