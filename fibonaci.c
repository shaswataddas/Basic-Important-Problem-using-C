#include<stdio.h>
void main()
{
    int result=1, num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
        result=result*i;
    printf("Fibo of %d is - %d",num,result);
}
