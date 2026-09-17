class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> result;
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(i==j)
                {
                    continue;
                }
                else if(boxes[j]=='0')
                {
                    continue;
                }
                else if(boxes[j]=='1')
                {
                    count = count + abs(i-j);
                }
            }
            result.push_back(count);
        }
        return result;
    }
};