#include<stdio.h>
#define MAX 70
void count_frequency(char *str,int *count,int len)
{
	int index;
	for(int i=0;i<len;i++)
	{
		index=str[i]-65;
		// printf(" %d ",index);
		count[index]++;
	}
	// for(int i=0;i<MAX;i++)
	// {
	// 	printf("\n %d ",count[i]);
	// }
}

int main()
{
	char str1[]="ShaswataDas";
	char str2[]="DasShaswata";
	int count1[MAX]={0},count2[MAX]={0};
	int len1 = sizeof(str1)/sizeof(str1[0])-1;
	int len2 = sizeof(str2)/sizeof(str2[0])-1;
	int flag=0;

	count_frequency(str1,count1,len1);
	count_frequency(str2,count2,len2);

	for(int i=0;i<MAX;i++)
	{
		if(count1[i]!=count2[i])
		{
			flag=1;
			break;
		}
	}
	if(flag)
		printf("\nFrequency Not Same.");
	else
		printf("\nFrequency Same.");

	return 0;
}
