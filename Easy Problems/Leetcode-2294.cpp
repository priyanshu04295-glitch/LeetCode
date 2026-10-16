class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count = 1;
        int min_val = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]-min_val>k)
            {
                count++;
                min_val = nums[i];
            }
        }
        return count;
    }
};