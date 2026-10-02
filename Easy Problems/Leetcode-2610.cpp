class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n=nums.size();
        vector<int> freq(n+1,0);
        int rows=0;

        for(int x:nums)
        {
            freq[x]++;
            rows = max(rows,freq[x]);
        }

        vector<vector<int>> ans(rows);

        vector<int> used(n+1,0);

        for(int x: nums)
        {
            int row = used[x];
            ans[row].push_back(x);
            used[x]++;
        }
        return ans;
    }
};