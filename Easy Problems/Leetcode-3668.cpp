class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> result;
        for(int id : order)
        {
            for(int f : friends)
            {
                if(id==f)
                {
                    result.push_back(id);
                    break;
                }
            }
            if(result.size()==friends.size())
            {
                break;
            }
        }
        return result;
    }
};