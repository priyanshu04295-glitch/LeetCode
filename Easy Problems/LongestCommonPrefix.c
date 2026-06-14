#include<stdio.h>
#include<string.h>

char* longestCommonPrefix(char** strs,int strsSize)
{
    int i=0;
    while(strs[0][i]!='\0')
    {
        char ch = strs[0][i];

        for(int j=1;j<strsSize;j++)
        {
            if(strs[j][i]!=ch)
            {
                strs[0][i]='\0';
                return strs[0];
            }
        }
        i++;
    }
    return strs[0];
}

void main()
{
    char str1[] = "flower";
    char str2[] = "flow";
    char str3[] = "flight";

    char *strs[] = {str1, str2, str3};

    printf("Longest Common Prefix: %s\n",longestCommonPrefix(strs,3));

}