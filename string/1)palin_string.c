#include<stdio.h>
#include <string.h>
void main()
{
    int i,l,flag=0;
    char s[100];
    printf("Enter a string\n");
    scanf("%[^\n]s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]!=s[l-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("String is palindrome");
    else
        printf("String is not palindrome");
}
