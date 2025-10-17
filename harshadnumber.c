#include <stdio.h>
int main()
{
    int num,sum=0,rem,original;
    printf("enter any number");
    scanf("%d",&num);
    original=num;
    while(num!=0)
    {
        rem=num%10;
        sum+=rem;
        num=num/10;
    }
    if(original%sum==0)
    {
        printf("%d it is a harshad number",original);
    }
    else{
        printf("%d Not a harshad number",original);
    }
    return 0;
}