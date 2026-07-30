int missingNumber(int* nums, int numsSize) {
    int n = numsSize;
    int sum1 = (n*(n+1))/2;
    int sum2=0;
    for(int i=0;i<n;i++)
    {
        sum2 = sum2+nums[i];
    }

    int ms = sum1-sum2;
    return ms;
}