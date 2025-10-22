#include<stdio.h>
int main(){
    int n;
    printf("enter the element till you want to print:");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
    return 0;

}