// Input: "Hello coders!!"
// Output: "coders!! Hello"

#include<stdio.h>
int main()
{
	char sen[]="Hello coders!!";
	int length = sizeof(sen)/sizeof(sen[0])-1;
	int start=length-1,end=0;
	char result[length];
	printf("\nInput: %s",sen);
	printf("\nOutput: ");
	for(int i=length;i>=0;i--)
	{
		// printf("%d\n",i);
		// start=length;
		if(sen[i]==' ' || i==0)
		{	
			end=i;
			// printf("%d %d\n",start,end);
			for(end;end<=start;end++)
		 		printf("%c",sen[end]);
		 	printf(" ");
		 	start = i;
		}
	}
	return 0;
}