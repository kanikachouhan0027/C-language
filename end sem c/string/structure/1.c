#include<stdio.h>
#include<string.h>
struct student {
    char name[100];
    int roll;
    int cgpa; 
};
int main(){
    struct student s1;
strcpy(s1.name,"kanika");
s1.roll=10;
s1.cgpa=9.09;
}