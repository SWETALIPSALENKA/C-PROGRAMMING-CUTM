#include<stdio.h>
int main()
{
    int a,b;
    printf("enter first number");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d",&b);
    printf("befoure swapping");
    a =a+b;
    b =a-b;
    a =a-b;
    printf("after swapping");
}