#include<stdio.h>
int checkArmstrong(int num)
{
    int reminder,result=0;
    int n = num;
    while(n>0)
    {
        reminder = n%10;
        n = n/10;
        result += (reminder*reminder*reminder);
    }
    if(result==num)
        printf("%d   ",result);
}
void main()
{
    int range;
    scanf("%d",&range);
    printf("The list of armstrong number upto %d is - ",range);
    for(int i=0;i<=range;i++)
    {
        checkArmstrong(i);
    }
}
