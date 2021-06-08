// INPUT : 947515
// Output : 975

#include<stdio.h>
int main()
{
	int num,result=0;
	int digit[7],count=0;
	printf("Enter the 7digit long Number: ");
	scanf("%d",&num);
	while(num!=0)
	{
		digit[count]=num%10;
		num = num/10;
		count++;
		// printf(" %d ",count);
	}
	// for(int i= 0;i<7;i++)
	// 	printf(" %d ",digit[i]);
	// printf("\n");
	for(int i=1;i<7;i++)
	{
		int value = digit[i];
		int hole = i;
		while(hole>0 && digit[hole-1]>value)
		{
			digit[hole]=digit[hole-1];
			hole--;
		}
		// printf("%d %d\n",hole,value);
		digit[hole]=value;
	}
	
	count=0;
	while(count<3)
	{
		result = (result*10)+digit[6-count];
		count++;
	}
	printf("\nResult - %d .",result);

	// for(int i= 0;i<7;i++)
	// 	printf(" %d ",digit[i]);

	return 0;
}