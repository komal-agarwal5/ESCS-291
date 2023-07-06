#include<stdio.h>
#include<string.h>
void main()
{
    int i,l;
    char s[100];
    printf("Enter a string\n");
    scanf("%[^\n]s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]>='a' && s[i<='z'])
            s[i]-=32;
        else if(s[i]>='A' && s[i]<='Z')
            s[i]+=32;
    }
    printf("String in toggle case is:\n%s \n",s);
}
