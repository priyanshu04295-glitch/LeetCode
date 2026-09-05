class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        ans.reserve(nums1.size());
        for(int x : nums1)
        {
            int nextGreater = -1;
            bool found = false;
            for(int y : nums2)
            {
                if(y==x)
                {
                    found = true;
                }
                else if(found && y>x)
                {
                    nextGreater = y;
                    break;
                }
            }
            ans.push_back(nextGreater);
        }
        return ans;
    }
};