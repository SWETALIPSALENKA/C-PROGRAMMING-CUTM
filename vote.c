#include<stdio.h>
int main()
{
int age;
printf("enter the age of a person");
scanf("%d",&age);
if(age>=18)
{
printf("the person is eligible for vote");
}
else
{
printf("the person is not eligible for vote");
}
return 0;
}
