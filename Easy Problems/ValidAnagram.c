#include<stdbool.h>
#include<string.h>

bool isAnagram(char* s, char* t) {
    int sl=strlen(s);
    int tl=strlen(t);

    if(sl!=tl)
    {
        return false;
    }

    int counts[26] = {0};
    
    for(int i=0;i<sl;i++)
    {
        counts[s[i]-'a']++;
        counts[t[i]-'a']--;
    }

    for(int i=0;i<26;i++)
    {
        if(counts[i]!=0)
        {
            return false;
        }
    }
    return true;
}