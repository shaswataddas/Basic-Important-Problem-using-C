#include<stdio.h>
#include<string.h>
int count_word(char *str,int count)
{
	int result=1;
	printf("%s",str);
	for(int i=0;i<count-1;i++)
		if(str[i]==' ' && str[i+1]!=' ')
			result+=1;
	return result;
}
int main()
{
	char sen[]="HEllo how are you  gd sir ";
	int count=strlen(sen);
	count = count_word(sen,count);
	printf("\n 		Input - %s",sen);
	printf("\n 		The Number of words - %d\n",count);
	return 0;
}