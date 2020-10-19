#include<stdio.h>
int checkPrime(int num)
{
    int isPrime=1;
    for(int k=2;k<num;k++)
    {
        if(num%k==0)
        {
            isPrime=0;
            break;
        }
    }
    return isPrime;
}
void main()
{
    int range;
    scanf("%d",&range);
    for(int i=2;i<=range;i++)
    {
        int isit = checkPrime(i);
        if(isit)
            printf("%d\t",i);
    }
}
