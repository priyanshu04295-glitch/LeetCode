
 void postorder(struct TreeNode* root,int* ans,int* index)
 {
    if(root==NULL)
    {
        return;
    }
    postorder(root->left,ans,index);
    postorder(root->right,ans,index);
    ans[*index] = root->val;
    (*index)++;
    
 }
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int* ans = (int*)malloc(100*sizeof(int));
    int index=0;
    postorder(root,ans,&index);
    *returnSize = index;
    return ans;
}