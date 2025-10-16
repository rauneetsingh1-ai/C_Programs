#include<stdio.h>
int main(){
    int age;
    printf("enter your age: ");
    scanf("%d",&age);
    // use of ternary operator 
    age>=18?printf("adult"):printf("not adult");
    return 0;
}// code run  successfull 
/* (condition?do sometin if it is true:do if first condtion is not true) */
