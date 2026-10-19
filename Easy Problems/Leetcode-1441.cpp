class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int m = target.size()-1;
        int o = target[m];
        int j = 0;
        vector<string> result;
        for(int i = 1;i<=o;i++)
        {
            if(i==target[j])
            {
                result.push_back("Push");
                j++;
            }
            else if(i!=target[j])
            {
                result.push_back("Push");
                result.push_back("Pop");
            }
        }
        return result;
    }
};