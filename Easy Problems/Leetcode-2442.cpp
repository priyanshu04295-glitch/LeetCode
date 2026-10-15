class Solution {
public:

    int reverse(int n)
    {
        int rev=0;
        while(n>0)
        {
            rev = rev*10+n%10;
            n = n/10;
        }
        return rev;
    }

    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> unique_nums;
        for(int x : nums)
        {
            unique_nums.insert(x);
            unique_nums.insert(reverse(x));
        }
        return unique_nums.size();
    }
};