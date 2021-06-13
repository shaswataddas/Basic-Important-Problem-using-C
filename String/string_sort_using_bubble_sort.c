#include<stdio.h>
#include<string.h>
#define MAX 20
void sort(char a[][MAX],int n)
{
	char temp[MAX];

	// printf("%x",a);

	for(int i=0;i<=n-1;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(strcmp(a[j],a[j+1])>0)
			{
				strcpy(temp,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],temp);
			}
		}
	}
	printf("\nFrom sort function: \n");
	for(int i=0;i<n;i++)
		printf(" %s ",a[i]);
}
int main()
{
	char arr[][MAX]={"Rimy","Debarghuya","Monish","Aniket","Aiskik","Shaswata","Aninda","Koulik","Koushik"};
	int n = sizeof(arr)/sizeof(arr[0]);

	// printf(" %x ",arr);

	sort(arr,n);

	printf("\nFrom main: \n");
	for(int i=0;i<n;i++)
		printf(" %s ",arr[i]);

	return 0;
}