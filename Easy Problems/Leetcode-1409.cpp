class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> p(m);
        for(int i=0;i<m;i++)
        {
            p[i] = i+1;
        }

        vector<int> result;

        int n = queries.size();
        for(int i=0;i<n;i++)
        {
            int val,idx;
            for(int j=0;j<m;j++)
            {
                if(p[j]==queries[i])
                {
                    idx = j;
                    val = p[idx];
                }

                

            }
            p.erase(p.begin()+idx);
            p.insert(p.begin(),val);

            result.push_back(idx);
        }

        return result;

    
    }
};