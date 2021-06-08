#include<stdio.h>
int main()
{
	char sen[]="hello, my name is shaswata.";
	int length = sizeof(sen)/sizeof(sen[0])-1;
	for(int i=0;i<length;i++)
	{
		int temp=sen[i];
		char temp_char = sen[i];
		//printf("%d",temp);
		if(temp_char=='a' || temp_char=='e' || temp_char=='i' || temp_char=='o' || temp_char=='u')
			temp-=32;
		printf("%c",temp);
	}	
	return 0;
}
