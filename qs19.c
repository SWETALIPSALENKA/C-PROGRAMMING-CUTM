#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the number");
    scanf("%d %d",&a,&b);
    printf("%d\n",a>22 && b>44);
    printf("%d\n",a!=b);
    printf("%d\n",a>76 || b>67);
    return 0;
}