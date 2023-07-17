#include<stdio.h>
#include<string.h>
void main()
{
    int i,l,vo=0,co=0;
    char s[100];
    printf("Enter a string\n");
    scanf("%[^\n]s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            vo++;
        else if((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z'))
            co++;  
    }
    printf("Number of vowels is : %d\n",vo);
    printf("Number of consonants is : %d\n",co);
}
