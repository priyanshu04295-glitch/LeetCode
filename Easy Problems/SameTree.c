#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode* createNode(int value) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->val = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if (p == NULL && q == NULL)
        return true;

    if (p == NULL || q == NULL)
        return false;

    if (p->val != q->val)
        return false;

    return isSameTree(p->left, q->left) &&
           isSameTree(p->right, q->right);
}

int main() {
    struct TreeNode* tree1 = createNode(1);
    tree1->left = createNode(2);
    tree1->right = createNode(3);

    struct TreeNode* tree2 = createNode(1);
    tree2->left = createNode(2);
    tree2->right = createNode(3);

    if (isSameTree(tree1, tree2))
        printf("Trees are the same.\n");
    else
        printf("Trees are different.\n");

    return 0;
}