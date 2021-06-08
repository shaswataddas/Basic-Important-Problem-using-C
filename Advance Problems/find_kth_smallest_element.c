#include<stdio.h>
int main()
{
	int arr[]={2,5,7,8,4,9,6,5,15,45,75,48};
	int length = sizeof(arr)/sizeof(arr[0]);
	int item,count=0;
	printf("Enter the value of k : ");
	scanf("%d",&item);

	for(int i=1;i<length;i++)
	{
		int value = arr[i];
		int hole = i;
		while(hole>0 && arr[hole-1]>value)
		{
			arr[hole]=arr[hole-1];
			hole--;
		}
		arr[hole]=value;
	}
	printf("The %d th smallest element is - %d.\n",item,arr[item-1]);
	return 0;
}