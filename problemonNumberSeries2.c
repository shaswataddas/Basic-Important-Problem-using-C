/*
Consider the following series: 1, 1, 2, 3, 4, 9, 8, 27, 16, 81, 32, 243, 64, 729, 128, 2187,....
*/

#include<stdio.h>
int evenodd(int quary)
{
    if(quary%2==0)
        return quary/2;
    else
        return (quary/2)+1;
}

void main()
{
    int quary,a=1,b=1;
    scanf("%d",&quary);
    int position = evenodd(quary);
    for(int i=2;i<=position;i++)
    {
            a=(a*3);
            b=b*2;
    }
    if(quary%2==0)
        printf("%d is the %dth value of the series.",a,quary);
    else
        printf("%d is the %dth value of the series",b,quary);
}
