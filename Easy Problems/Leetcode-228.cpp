class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        for(int i=0;i<nums.size();i++)
        {
            int start = nums[i];
            while(i+1<nums.size() && (long long)nums[i+1]-nums[i]==1l)
            {
                i++;
            }
        if(start==nums[i])
        {
            result.push_back(to_string(start));
        }
        else
        {
            result.push_back(to_string(start) + "->" + to_string(nums[i]));
        }
        }
        return result;
    }
};