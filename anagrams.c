#include<stdio.h>
int main()
{
    int i,j,hash[256]={0},count1=0,count2=0;
    char string1[10],string2[10];
    printf("\nEnter two strings::");
    scanf("%s %s",string1,string2);
    for(i=0;string1[i]!='\0';i++) count1++;
    for(i=0;string2[i]!='\0';i++) count2++;
    if(count1>count2)
    {
        printf("\nThey are not anagrams");
        return 0;
    }
    else
    {
        for(i=0;string1[i]!='\0';i++) hash[string1[i]]++;
        for(j=0;string2[i]!='\0';j++) hash[string2[j]]--;
        for(i=0;i<256;i++)
        {
            if(hash[i]!=0)
            {
                printf("\nThey are not anagrams");
                return 0;
            }
        }
    }
    printf("\nThey are anagrams");
    return 0;
}