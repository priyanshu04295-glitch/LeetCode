class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        ans.reserve(queries.size());
        for(const auto& q : queries)
        {
            int xj=q[0],yj=q[1],r=q[2];
            int r2=r*r;
            int count=0;

            for(const auto& p : points)
            {
                int dx = p[0]-xj;
                int dy = p[1]-yj;
                if(dx*dx+dy*dy<=r2){
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};