class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> nums;
        for(int i=1;i<=n;i++)
        {
            nums.push_back(i);
        }
        int index = 0;
        while(nums.size()>1)
        {
            index = (index + k-1)%nums.size();
            nums.erase(nums.begin()+index);
            
        }
        return nums[0];
    }
};