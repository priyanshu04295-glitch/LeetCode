#include <stdio.h>
#include <stdlib.h>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

// Helper function to create a new tree node
struct TreeNode* createNode(int val) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->val = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to find the minimum depth of a binary tree
int minDepth(struct TreeNode* root) {
    if(root==NULL)
    {
        return 0;
    }
    if(root->left==NULL)
    {
        return minDepth(root->right)+1;
    }
    if(root->right==NULL)
    {
        return minDepth(root->left)+1;
    }
    int leftDepth = minDepth(root->left);
    int rightDepth = minDepth(root->right);

    if(leftDepth>rightDepth)
    {
        return rightDepth+1;
    }
    return leftDepth+1;
}

// Helper function to free the allocated memory of the tree
void freeTree(struct TreeNode* root) {
    if (root == NULL) return;
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}

int main() {
    /* Let's construct the skewed tree from LeetCode's Example 2:
       [2, null, 3, null, 4, null, 5, null, 6]
       
              2
               \
                3
                 \
                  4
                   \
                    5
                     \
                      6
    */
    struct TreeNode* root = createNode(2);
    root->right = createNode(3);
    root->right->right = createNode(4);
    root->right->right->right = createNode(5);
    root->right->right->right->right = createNode(6);

    // Calculate minimum depth
    int depth = minDepth(root);
    
    printf("The minimum depth of the tree is: %d\n", depth);

    // Clean up memory
    freeTree(root);

    return 0;
}