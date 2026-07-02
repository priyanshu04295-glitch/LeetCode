#include <stdio.h>
#include <stdlib.h>


struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};


struct TreeNode* createNode(int value) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->val = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}


struct TreeNode* buildBST(int* nums, int start, int end) {
    if (start > end) {
        return NULL;
    }
    
    
    int mid = start + (end - start) / 2;
    
    struct TreeNode* root = createNode(nums[mid]);
    
    
    root->left = buildBST(nums, start, mid - 1);
    root->right = buildBST(nums, mid + 1, end);
    
    return root;
}


struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    return buildBST(nums, 0, numsSize - 1);
}


void printInOrder(struct TreeNode* root) {
    if (root == NULL) return;
    printInOrder(root->left);
    printf("%d ", root->val);
    printInOrder(root->right);
}


void freeTree(struct TreeNode* root) {
    if (root == NULL) return;
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}


int main() {
    
    int nums[] = {-10, -3, 0, 5, 9};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    
    printf("Input Sorted Array: ");
    for(int i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n\n");

    
    struct TreeNode* root = sortedArrayToBST(nums, numsSize);
    
    
    printf("Root of the built BST: %d\n", root->val);
    printf("In-order traversal of the built BST: ");
    printInOrder(root);
    printf("\n");
    
    
    freeTree(root);
    
    return 0;
}