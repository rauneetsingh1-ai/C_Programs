#include<stdio.h>
int main(){
    int sum=0,n,i=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("The sum of first %d natural number is %d",n,sum);

    // also reversing the elements
    /*for(int i=n;i>=1;i--){
        printf("%d\n ",i);
    }*/
    return 0;
}

