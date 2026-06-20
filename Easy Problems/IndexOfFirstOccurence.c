#include<stdio.h>
#include<string.h>

int strStr(char* haystack, char* needle)
{
    int i,j;
    for(i=0;haystack[i]!='\0';i++)
    {
        j=0;
        while(needle[j]!='\0' && haystack[i+j]==needle[j])
        {
            j++;
        }
        if(needle[j]=='\0')
        {
             return i;
        }
    }
    return -1;
}

int main()
{

    char haystack[100];
    char needle[50];
    printf("Enter the haystack : ");
    scanf("%s",haystack);
    printf("Enter the needle : ");
    scanf("%s",needle);
    int result = strStr(haystack,needle);
    printf("%d\n",result);

    return 0;
}