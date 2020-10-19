#include<stdio.h>
#include<string.h>
void main()
{
    char num[20];
    int ispalindrome=1;
    gets(num);
    int end=strlen(num)-1,start=0;
    while(end>start)
    {
        if(num[end]!=num[start])
        {
            ispalindrome=0;
            break;
        }
        else
        {
            start++;
            end--;
        }
    }
    if(ispalindrome)
        printf("Palindrome");
    else
        printf("Not");
}
