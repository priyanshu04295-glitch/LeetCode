class Solution {
public:
    int countDigit(int n,int k)
    {
        int count=0;
        while(n>0)
        {
            int dig = n%10;
            if(dig==k)
            {
                count++;
            }
            n=n/10;
        }
        return count;
    }
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum = sum+countDigit(nums[i],digit);
        }
        return sum;
    }
};
