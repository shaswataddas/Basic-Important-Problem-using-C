#include<stdio.h>
void checkPrime(int year)
{
    int isprime=1;
    for(int i=2;i<year;i++)
    {
        if(year%i==0)
        {
            isprime=0;
            break;
        }
    }
    if(isprime)
        printf("Its a positive and prime number");
    else
        printf("Its a positive number but not a prime one.");
}


void main()
{
    int year;
    printf("Enter the number: ");
    scanf("%d",&year);
    if(year<0)
        printf("Whatever you entered is a negative number.");
    else
        checkPrime(year);
}
