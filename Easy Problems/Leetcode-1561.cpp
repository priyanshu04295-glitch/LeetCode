class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int max=0;
        int n=piles.size()/3;
        sort(piles.begin(),piles.end());
        for(int i=piles.size()-2;i>=n;i-=2)
        {
            max+=piles[i];
        }
        return max;
    }
};