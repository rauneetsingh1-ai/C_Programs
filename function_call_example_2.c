#include<stdio.h>
void yo(); // function declare
void hi();
int main(){
    yo();// function valid call
    hi();
    return 0;
}
void yo(){
    printf("Yo!\n"); // function define
}
void hi(){
    printf("Hi!\n");
}