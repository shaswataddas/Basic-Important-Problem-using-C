#include<stdio.h>
void main()
{
    int num,reminder,result=0;
    scanf("%d",&num);
    int n = num;
    while(n>0)
    {
        reminder = n%10;
        n = n/10;
        result += (reminder*reminder*reminder);
    }
    if(result==num)
        printf("Yeah, Its a Armstrong Number.");
    else
        printf("No, Its not");
    printf("\n%d is the result and you entered %d",result,num);
}
