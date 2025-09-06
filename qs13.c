#include<stdio.h>
int main()
{
float celsius,fahrenheit;
printf("enter temperture in celsius");
scanf("%f",&celsius);
fahrenheit = (celsius * 9/5)+32;
printf("%f %f",celsius,fahrenheit);
return 0;
}