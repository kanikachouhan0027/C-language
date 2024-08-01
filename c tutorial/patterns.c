/*#include<stdio.h>
int main(){                                                
   int n,m;
   printf("enter rows\n");
   scanf("%d",&n);
   printf("enter column\n");
   scanf("%d",&m);
   for(int i=1;i<=n;i++){
    for(int i=1;i<=m;i++){
        printf("*");
        }
   printf("\n");
   }
}*/
/*#include<stdio.h>
int main(){
    int n,m;
   printf("enter rows\n");
   scanf("%d",&n);
   printf("enter column\n");
   scanf("%d",&m);
   for(int i=1;i<=n;i++){
    for(int i=1;i<=m;i++){
        printf("%d",i);
        }
   printf("\n");
   }
}*/

/*#include<stdio.h>
int main(){
    int n;
    int sum=0;
   printf("enter rows\n");
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
        sum=sum+i;
        for (int i=1;i<=sum;i++){
            printf("*");
        }
        
   printf("\n");
   }
}*/
/*#include<stdio.h>//2nd method                     
int main(){
    int n;
    printf("enter rows\n");
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            printf("%d",j);//printf("*")
        }     
   printf("\n");
   }
}*/
/*
\



#include<stdio.h>
int main(){
    int n;
   printf("enter rows\n");
   scanf("%d",&n);
   for(int i=n;i>=1;i--){
        for (int j=1;j<=i;j++){//j=i to j>=1,j--==4321 then 321 till 1
            printf("%d",j);//printf("*")
        }       
   printf("\n");
   }
}*/
/*#include<stdio.h>
int main(){
    int day;
    printf("enter day");
    scanf("%d",&day);
    switch(day){
        case 2:printf("tuesday");
        case 1:printf("mon");
        case 3:printf("wed");//if here also case 1 instead of case 3 then it will give error 
        case 4:printf("thurs");
    }
    return 0;
}
*/
