// calculating simple interest....
#include<stdio.h>
int main(){
    float p, r, t;
    printf("Enter the principle amount: ");
    scanf("%f",&p);
    printf("Enter the annual interest rate: ");
    scanf("%f",&r);
    printf("Enter the time period in years: ");
    scanf("%f",&t);
    printf("The simple interest will be: %f",p*r*t/100);
    return 0;
} // the code is running succesfully 
