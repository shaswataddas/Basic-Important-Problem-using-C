
#include<stdio.h>
void main()
{
    int n,total=10,mini=5,residual;
    scanf("%d",&n);
    if(n!=0){
        residual = total-mini;
        residual = residual/n;
        residual = residual*n;
    }
    else
        residual = 0;
    printf("Number of Candies Sold - %d",residual);
    printf("\nNumber of Candies Available - %d",total-residual);
}
