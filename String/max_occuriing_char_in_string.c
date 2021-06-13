#include<stdio.h>
void count_items(char *str,int *count,int length)
{
	int index;
	for(int i=0;i<length;i++)
	{
		// printf("\n%c - %d",str[i],str[i]-65);
		index=str[i]-65;
		if(index>=0)
		{
			// printf(" %d ",index);
			count[index]+=1;
		}
	}
	// for(int i=0;i<70;i++)
	// {
	// 	if(count[i]>0){
	// 		printf("\n%c - %d",i+65,count[i]);
	// 	}
	// }
	int maxi=0,maxi_index=0;
	for(int i=0;i<70;i++)
	{
		if(count[i]>maxi)
		{
			maxi=count[i];
			maxi_index=i;
		}
	}
	printf("\nCharacter - %c -> Occurance - %d\n",maxi_index+65,maxi);
}
int main()
{
	char str[]="sshasswata Das";
	int count[70]={0};
	int length = sizeof(str)/sizeof(str[0]);
	count_items(str,count,length);
	return 0;
}