class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int m = nums1.size()-1;
        int n = nums2.size()-1;
        int i=0,j=0,k=0;
        while(i<=m && j<=n){
        if(nums1[i]==nums2[j])
        {
            if(result.empty()||result.back()!=nums1[i]){
                result.push_back(nums1[i]);
            }
            i++;
            j++;
        }
        else if(nums1[i]<nums2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
        }
        return result;

    }
};