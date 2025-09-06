#include<stdio.h>
int main()
{
    int a,b=0,sum;
    for(a=0 ; b <=10 ; b++)
    {
        sum=a+b;
        a=sum;
    }
    printf("%d",sum);
    return 0;
}