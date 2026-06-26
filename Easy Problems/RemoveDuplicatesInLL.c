#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode* deleteDuplicates(struct ListNode* head)
{
    struct ListNode *current = head;

    while(current != NULL && current->next != NULL)
    {
        if(current->val == current->next->val)
        {
            current->next = current->next->next;
        }
        else
        {
            current = current->next;
        }
    }

    return head;
}

struct ListNode* createNode(int value)
{
    struct ListNode *newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = value;
    newNode->next = NULL;
    return newNode;
}

void printList(struct ListNode *head)
{
    while(head != NULL)
    {
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    struct ListNode *head = createNode(1);
    head->next = createNode(1);
    head->next->next = createNode(2);
    head->next->next->next = createNode(3);
    head->next->next->next->next = createNode(3);

    printf("Original List:\n");
    printList(head);

    head = deleteDuplicates(head);

    printf("After Removing Duplicates:\n");
    printList(head);

    return 0;
}