/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 void preorder(struct TreeNode* root,int* ans,int* index)
 {
    if(root==NULL)
    {
        return;
    }
    ans[*index]=root->val;
    (*index)++;
    preorder(root->left,ans,index);
    preorder(root->right,ans,index);
    
 }
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int* ans = (int*)malloc(100*sizeof(int));
    int index=0;
    preorder(root,ans,&index);
    *returnSize = index;
    return ans;
}