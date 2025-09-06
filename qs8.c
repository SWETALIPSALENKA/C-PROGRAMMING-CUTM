#include<stdio.h>
int main()
{
    int day;
    printf("enter day number (1-7)");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        printf("sunday");
        case 2:
        printf("monday");
        case 3:
        printf("tuseday");
        case 4:
        printf("wednesday");
        case 5:
        printf("thursday");
        case 6:
        printf("friday");
        case 7:
        printf("saturday");
        break;
        default:
        printf("all the day");
    }
    return 0;
}