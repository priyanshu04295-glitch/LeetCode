class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int n = plants.size();
        int steps = 0;
        int temp = capacity;
        for(int i=0;i<n;i++)
        {
            if(capacity>=plants[i])
            {
                capacity = capacity-plants[i];
                steps++;
            }
            else
            {
                capacity = temp;
                steps += 2*i+1;
                capacity = capacity-plants[i];
            }
        }
        return steps;
    }
};