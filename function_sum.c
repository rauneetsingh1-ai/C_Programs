#include<stdio.h>
int sum(int a,int b);
int main(){
    int a,b,s;
    printf("enter the number 1:");
    scanf("%d",&a);
    printf("enter the number 2:");
    scanf("%d",&b);
    s=sum(a,b);
    printf("the sum is:%d\n",s);
    return 0;
}
int sum(int x,int y){
    return x+y;
}
