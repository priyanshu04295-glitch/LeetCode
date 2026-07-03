#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode* createNode(int val)
{
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));

    newNode->val = val;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

int height(struct TreeNode* root)
{
    if(root == NULL)
        return 0;

    int left = height(root->left);
    int right = height(root->right);

    if(left == -1 || right == -1)
        return -1;

    if(abs(left - right) > 1)
        return -1;

    if(left > right)
        return left + 1;
    else
        return right + 1;
}

bool isBalanced(struct TreeNode* root)
{
    if(height(root) == -1)
        return false;

    return true;
}

int main()
{
    struct TreeNode* root = createNode(3);

    root->left = createNode(9);
    root->right = createNode(20);

    root->right->left = createNode(15);
    root->right->right = createNode(7);

    if(isBalanced(root))
        printf("true");
    else
        printf("false");

    return 0;
}