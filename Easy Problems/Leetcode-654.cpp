
class Solution {
public:
    TreeNode* build(vector<int>& nums,int left,int right)
    {
        if(left>right)
        {
            return nullptr;
        }

        int max_idx=left;
        for(int i=left;i<=right;++i)
        {
            if(nums[i]>nums[max_idx])
            {
                max_idx = i;
            }
        }

        TreeNode* root = new TreeNode(nums[max_idx]);
        root->left = build(nums,left,max_idx-1);
        root->right = build(nums,max_idx+1,right);

        return root;
    };

    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return build(nums,0,nums.size()-1);
    }
};