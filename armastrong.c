#include<stdio.h>
#include<math.h>
int main() {
    int num,rem,original,result=0,p=0;
    printf("enter any number");
    scanf("%d",&num);
    original=num;
    while(num!=0)
    {
        num=num/10;
        p++;
    }
    num=original;
    while(num!=0)
    {
        rem=num%10;
        result+=pow(rem,p);
        num=num/10;
    }
    if(original==result)
    {
        printf("the number is armstrong",original);
    }
    else
    {
        printf("the number is not armstrong",original);
    }
    return 0;
}
