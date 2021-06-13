#include<stdio.h>
#include<string.h>
void check_pal(char *str)
{
	int length = strlen(str);
	int maxlength=1,start=0,low,high;
	for(int i=1;i<length;++i)
	{
		// printf("\n %d",i);
		low=i-1;high=i;
		while(low>=0 && high<length && str[low]==str[high])
		{
			if(high-low+1>maxlength)
			{
				// printf("\n%d ",maxlength);
				start=low;
				maxlength = high-low+1;
			}
			--low;
			++high;
		}
		low=i-1;high=i+1;
		while(low>=0 && high<length && str[low]==str[high])
		{
			if(high-low+1>maxlength)
			{
				// printf("\n2nd - %d ",maxlength);
				start=low;
				maxlength = high-low+1;
			}
			--low;
			++high;
		}
	}
	printf("\nLongest Substring: ");
	for(int k=start;k<start+maxlength;k++)
	{
		printf("%c",str[k]);
	}
	printf("\nMaxlength - %d . Starting position - %d ",maxlength,start);
}


int main()
{
	char str[] = "jilmalaalam";
	check_pal(str);
	return 0;
}
