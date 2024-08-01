#include<stdio.h>
int main(){
int maxi[10];
int *ptr=maxi;
for (int j=0;j<10;j++){
    printf("enter value: ");
    scanf("%d",ptr); 
    ptr++;
}
ptr=maxi;
for (int i=0;i<10;i++){
    printf("%d\n",*ptr);
    ptr++;

}}