#include<stdio.h>
int minimum(int x, int y)
{
    int min;
    if(x<y)
        min=x;
    else
        min=y;
    return min;
}


void main()
{
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    int min = minimum(num1,num2);
    for(int i = min;i>0;i--)
    {
        if(num1%i==0 && num2%i==0)
        {
            printf("GCD of two number is %d",i);
            break;
        }
    }
}
