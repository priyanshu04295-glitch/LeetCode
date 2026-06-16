#include<stdio.h>
#include<stdlib.h>

struct ListNode{
    int val;
    struct ListNode *next;
};

struct ListNode* createNode(int val)
{
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->val=val;
    node->next = NULL;
    return node;
}

struct ListNode* createList(int arr[],int n)
{
    if(n==0)
    {
        return NULL;
    }
    struct ListNode* head = createNode(arr[0]);
    struct ListNode* current = head;
    for(int i=1;i<n;i++)
    {
        current->next = createNode(arr[i]);
        current = current->next;
    }
    return head;
}

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    struct ListNode dummy;
    struct ListNode* tail = &dummy;
    dummy.next = NULL;

    while(list1&&list2)
    {
        if(list1->val<=list2->val)
        {
            tail->next = list1;
            list1=list1->next;
        }
        else
        {
            tail->next=list2;
            list2=list2->next;
        }
        tail=tail->next;
    }
    if(list1!=NULL)
    {
        tail->next = list1;
    }
    else
    {
        tail->next=list2;
    }
    return dummy.next;
}

void printList(struct ListNode* head)
{
    printf("[");
    while(head!=NULL)
    {
        printf("%d",head->val);
        if(head->next!=NULL)
        {
            printf(",");
        }
        head = head->next;
    }
    printf("]");
}

void freeList(struct ListNode* head)
{
    while(head!=NULL)
    {
        struct ListNode* temp = head;
        head = head->next;
        free(temp);
    }
}

int main()
{
    int arr1[] = {1,2,3};
    int arr2[] = {1,3,4};

    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    struct ListNode* list1 = createList(arr1,n1);
    struct ListNode* list2 = createList(arr2,n2);

    printf("List1 : ");
    printList(list1);
    printf("\n");

    printf("List2 : ");
    printList(list2);
    printf("\n");

    struct ListNode* merged = mergeTwoLists(list1,list2);

    printf("Merged List: ");
    printList(merged);

    freeList(merged);

    return 0;
}