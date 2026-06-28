#include<stdio.h>
#include<stdlib.h>

struct TreeNode
{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
    
};

struct TreeNode* createNode(int value)
{
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->val=value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void inorder(struct TreeNode* root,int* ans,int* index)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left,ans,index);
    ans[*index]=root->val;
    (*index)++;

    inorder(root->right,ans,index);

}

int* inorderTraversal(struct TreeNode* root,int* returnSize)
{
    int* ans = (int*)malloc(100*sizeof(int));
    int index=0;

    inorder(root,ans,&index);

    *returnSize = index;

    return ans;
}

int main()
{
    struct TreeNode* root = createNode(1);
    root->right=createNode(2);
    root->left=createNode(3);

    int size;
    int* result = inorderTraversal(root,&size);

    printf("Inorder Traversal : ");

    for(int i=0;i<size;i++)
    {
        printf("%d ",result[i]);
    }

    printf("\n");

    free(result);
    free(root->right->left);
    free(root->right);
    free(root);

    return 0;
}