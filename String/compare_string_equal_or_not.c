#include<stdio.h>
void compare(char *a,char *b)
{
	int i=0,j=0,flag=0;
	while(a[i]!='\0' && b[j]!='\0')
	{
		if(a[i]!=b[j])
		{
			flag=1;
			break;
		}
		i++;
		j++;
	}
	if(flag)
		printf("Not Same");
	else
		printf("Same");

}

int main()
{
	char str1[20],str2[20];
	printf("\nEnter 1st string: ");
	scanf("%s",str1);
	printf("\nEnter 2nd string: ");
	scanf("%s",str2);

	compare(str1,str2);

	return 0;
}