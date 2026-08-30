class Solution {
public:
    int hammingDistance(int x, int y) {
        int xorVal = x^y;
        int count=0;
        while(xorVal>0)
        {
            xorVal &= (xorVal-1);
            count++;
        }
        return count;
    }
};