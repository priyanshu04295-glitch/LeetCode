class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n=timeSeries.size();
        if(n==0) return 0;
        int count =0;
        for(int i=0;i<n-1;i++)
        {
            count+=duration;
            int poisonEnd = timeSeries[i]+duration-1;
            if(poisonEnd>=timeSeries[i+1])
            {
                count -= (poisonEnd - timeSeries[i+1]+1);
            }
        }
        count += duration;
        return count;
    }
};