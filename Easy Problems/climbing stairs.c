#include<stdio.h>
int climbStairs(int n)
{
    if(n==1)
    {
        return 1;
    }
    int first=1;
    int second=2;
    int current;
    for(int i=3;i<=n;i++)
    {
        current=first+second;
        first=second;
        second=current;
    }
    return second;
}
int main()
{
    int n;
    printf("Enter number of stairs : ");
    scanf("%d",&n);

    printf("Number of ways = %d\n",climbStairs(n));

    return 0;
}