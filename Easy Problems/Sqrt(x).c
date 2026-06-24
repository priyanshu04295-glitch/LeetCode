#include<stdio.h>
int mySqrt(int x)
{
    if(x==0||x==1)
    {
        return x;
    }
    int low = 1,high=x;
    int ans=0;
    while(low<=high)
    {
        int mid = low+(high-low)/2;

        if((long long)mid*mid==x)
        {
            return mid;
        }
        if((long long)mid*mid<x)
        {
            ans=mid;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }

    }
    return ans;
}
int main()
{

    int x;
    printf("Enter a non-negative integer: ");
    scanf("%d",&x);

    if(x<0)
    {
        printf("Square root is not defined for negative integers.\n");
    }
    else
    {
        printf("Square root = %d\n",mySqrt(x));
    }

    return 0;
}