class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int time = 0;
        int n = garbage.size();
        for(string s : garbage)
        {
            time +=s.length();
        }
        int countM=0;
        for(int i=0;i<n;i++)
        {
            if(garbage[i].contains("M"))
            {
                countM=i;
            }
        }
        for(int i=0;i<countM;i++)
        {
            time +=travel[i];
        }
        int countG=0;
        for(int i=0;i<n;i++)
        {
            if(garbage[i].contains("G"))
            {
                countG=i;
            }
        }
        for(int i=0;i<countG;i++)
        {
            time+=travel[i];
        }
        int countP=0;
        for(int i=0;i<n;i++)
        {
            if(garbage[i].contains("P"))
            {
                countP=i;
            }
        }
        for(int i=0;i<countP;i++)
        {
            time+=travel[i];
        }
        return time;
    }
};