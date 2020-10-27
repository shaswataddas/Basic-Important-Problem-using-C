'''
Selection of MPCS exams include a fitness test which is conducted on ground. There will be a batch of 3 trainees, appearing for running test in track for 3 rounds. You need to record their oxygen level after every round. After trainee are finished with all rounds, calculate for each trainee his average oxygen level over the 3 rounds and select one with highest oxygen level as the most fit trainee. If more than one trainee attains the same highest average level, they all need to be selected.

Display the most fit trainee (or trainees) and the highest average oxygen level.

Note:

    The oxygen value entered should not be accepted if it is not in the range between 1 and 100.
    If the calculated maximum average oxygen value of trainees is below 70 then declare the trainees as unfit with meaningful message as “All trainees are unfit.
    Average Oxygen Values should be rounded.

Example 1:

    INPUT VALUES

            95

            92

            95

            92

            90

            92

            90

            92

            90

    OUTPUT VALUES
        Trainee Number : 1
        Trainee Number : 3

 

Note:

Input should be 9 integer values representing oxygen levels entered in order as

 

Round 1

    Oxygen value of trainee 1
    Oxygen value of trainee 2
    Oxygen value of trainee 3

 

Round 2

    Oxygen value of trainee 1
    Oxygen value of trainee 2
    Oxygen value of trainee 3

 

Round 3

    Oxygen value of trainee 1
    Oxygen value of trainee 2
    Oxygen value of trainee 3
'''
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
