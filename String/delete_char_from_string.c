#include<stdio.h>
void delete(char *str,char item,int length)
{
	// printf("%c\n",item);
	int count=0;
	printf("\n\tThe Converted String: ");
	for(int i=0;i<length;i++)
		if(str[i]!=item)
			printf("%c",str[i]);
		else
			count+=1;
	printf("\n count the %c - %d times.\n",item,count);
}

int main()
{
	char str[]="Hello, Its a good Morning. Hope you all are well.";
	int length = sizeof(str)/sizeof(str[0]);
	char item ='o';
	printf("\n\tThe original String: ");
	printf("%s\n",str);
	delete(str,item,length);
}