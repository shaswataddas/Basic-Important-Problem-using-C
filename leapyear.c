#include<stdio.h>
void main()
{
    int year;
    scanf("%d",&year);
    if (year%100==0)
        if(year%400==0)
            printf("LeapYear.");
        else
            printf("Not");
    else
        if (year%4==0)
            printf("LeapYear");
        else
            printf("Not");

}
