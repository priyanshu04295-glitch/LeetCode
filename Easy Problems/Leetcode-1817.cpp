class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int, unordered_set<int>> userMinutes;
        for(const auto& log : logs)
        {
            userMinutes[log[0]].insert(log[1]);
        }
        vector<int> result(k,0);
        for(const auto& [id,minutes] : userMinutes)
        {
            int uam = minutes.size();
            if(uam>=1 && uam<=k)
            {
                result[uam-1]++;
            }
        }
        return result;
    }
};