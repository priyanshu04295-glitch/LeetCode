#include<stdio.h>
#include<string.h>
int getValue(char ch)
{
    switch(ch)
    {
        case 'I':return 1;
        case 'V':return 5;
        case 'X':return 10;
        case 'L':return 50;
        case 'C':return 100;
        case 'D':return 500;
        case 'M':return 1000;
    }
    return 0;
}
int romanTointeger(char *s)
{
    int result = 0;
    int i=0;
    while(s[i]!='\0')
    {
        int current = getValue(s[i]);
        int next = getValue(s[i+1]);
        if(current<next)
        {
            result -= current;
        }
        else
        {
            result += current;
        }
        i++;
    }
    
    return result;
}
int main()
{
    char s[10];
    scanf("%s",s);
    printf("%d",romanTointeger(s));
    
}