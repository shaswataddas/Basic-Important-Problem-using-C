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
    int quary,position;
    int a=0,b=0;
    scanf("%d",&quary);
    position = evenodd(quary);
    if(quary%2==0)
    {
        a=a+6*(position-1);
        printf("The %dth position value will be - %d",quary,a);
    }
    else
    {
        b=b+7*(position-1);
        printf("The %dth position value will be - %d",quary,b);
    }
}
