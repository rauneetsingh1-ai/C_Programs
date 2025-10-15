#include <stdio.h>
int main()
{
    int num,sum=0,rem,original,productofdigit=1;
    printf("enter the number",num);
    scanf("%d",&num);
    original=num;
    while(num!=0)
    {
       rem=num%10;
       sum=sum+rem;
       productofdigit*=rem;
       num=num/10;

    }
    if(sum=productofdigit){
        printf("%d it is a spy number",original);
    }
    else{
        printf("%d not a spy number");
    }
    return 0;
}