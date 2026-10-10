class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pnums;
        vector<int> nnums;
        vector<int> result;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=0)
            {
                pnums.push_back(nums[i]);
            }
            else
            {
                nnums.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size()/2;i++)
        {
            result.push_back(pnums[i]);
            result.push_back(nnums[i]);
        }
        return result;
        
    }
};