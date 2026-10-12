class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        int result = nums[i]+nums[j];
        while(i<j)
        {
            i++;
            j--;
            if((nums[i]+nums[j])>result)
            {
                result = nums[i]+nums[j];
            }
        }
        return result;
    }
};