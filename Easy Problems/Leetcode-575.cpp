class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        int a = n/2;
        unordered_set<int> arr(candyType.begin(),candyType.end());
        if(arr.size()>a)
        {
            return a;
        }
        return arr.size();

    }
};