int titleToNumber(char* arr) {
    int sum=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        sum = sum*26 + (arr[i]-64);
    }
    return sum;
}