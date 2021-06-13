#include<stdio.h>
#define MAX 50
void arrsort(char *arr,int length)
{
	char temp;
	for(int i=0;i<length-1;i++)
	{
		for(int j=0;j<length-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("\nResult: ");	
	for(int i=0;i<=length;i++)
		printf("%c",arr[i]);
	printf("\n");
}

int main()
{
	char str[MAX];
	int length=0,i=0;
	printf("Enter the String: ");
	scanf("%s",str);
	while(str[i]!='\0')
	{
		length++;
		i++;
	}
	printf(" %d ",length);
	// int length = sizeof(str)/sizeof(str[0])-1,count=0;
	// char name[50][MAX];
	arrsort(str,length);
	return 0;
}