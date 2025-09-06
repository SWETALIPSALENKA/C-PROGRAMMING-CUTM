#include<stdio.h>
int main()
{
    int a,b,tem;
    printf("enter first number");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d", &b);
    printf("befoure swapping");
tem =a;
a =b;
b =tem;
printf("after swapping");
return 0;
}