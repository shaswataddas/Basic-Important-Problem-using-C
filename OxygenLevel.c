#include<stdio.h>
int truevalue[3]={0,0,0};
void maxi(int a, int b, int c)
{
    int i;
    int maximum = a;
    if(a>b && a>c)
        maximum = a;
    else if(b>c)
        maximum = b;
    else
        maximum = c;

    printf("\n%d",maximum);

    if (maximum==a)
        truevalue[0]=1;
    if(maximum == b)
        truevalue[1] = 1;
    if(maximum == c)
        truevalue[2] = 1;

    printf("\n%d  %d  %d",truevalue[0],truevalue[1],truevalue[2]);

    for(i=0;i<3;i++)
        if(truevalue[i]==1)
            printf("\n%d   ",i+1);
}

void main()
{
    int player[3]={0},i,mean,temp;
    for(i=0;i<9;i++){
        scanf("%d",&temp);
        player[i%3] = player[i%3]+temp;
    }
    printf("\n%d  %d  %d",player[0],player[1],player[2]);
    maxi(player[0],player[1],player[2]);
}
