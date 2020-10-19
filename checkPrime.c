#include<stdio.h>
void main()
{
    int num,isprime=1,i;
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            isprime=0;
            break;
        }
    }
    if(isprime)
        printf("Its a Prime one.");
    else
        printf("Its not.Because it is divisible by - %d",i);
}
