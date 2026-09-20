class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int count=0;
        int prev_count=0;
        for( string row : bank)
        {
            int curr_count=0;
            for(char c : row)
            {
                if(c=='1')
                {
                    curr_count++;
                }
            }
            if(curr_count > 0 ) {
                count = count + prev_count*curr_count;
                prev_count = curr_count;
            }
        }
        return count;
    }
};