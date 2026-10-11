class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> onesRSum(m,0);
        vector<int> onesCSum(n,0);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    onesRSum[i]++;
                    onesCSum[j]++;
                }
            }
        }
        vector<vector<int>> result(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                result[i][j] = 2*onesRSum[i] + 2*onesCSum[j] - m - n;
            }
        }
        return result;
    }
};