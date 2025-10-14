/*#include<stdio.h>
int fun(int n)
{
    if(n==1)
    return 1;
    else
    return 1+fun(n-1);
}
int main()
{
    int n=3;
    printf("%d",fun(n));
    return 0;
}//recursion of a function */

/*#include<stdio.h>
int fun(int n)
{
    if(n==0)
    return 1;
    else
    return 7+fun(n-2);
}
int main()
{
    printf("%d",fun(4));
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int i=10;
    int *p,*q;
    p=&i;//storin adress of i only!!
    q=p;
    printf("%d%d",*p,*q);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int i=10,j=20;
    int *p,*q;
    p=&i;
    q=&j;
    *q=*p;//value operator or dereference operator also
    printf("%d%d",&*q,&*p);//wrond output please receck 
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int i=1;
    int *p=&i;
    int *q=p;
    *q=5;
    printf("%d\n",*p);
    return 0;
}*/

//  *p=&i;  WILL ALWAYS GIVE YOU A SEGMENT ERROR 

/*#include<stdio.h>
void fun(const int*p)
{
    *p=0;
}
int main()
{
    const int i=10;
    fun(&i);
    return 0;
}   WILL IVE US ERROR */