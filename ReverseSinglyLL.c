
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev=NULL;
    struct ListNode* curr=head;
    struct ListNode* next_node= NULL;
    while(curr!=NULL)
    {
        next_node=curr->next;
        curr->next = prev;
        prev = curr;
        curr = next_node;
    }
    return prev;
}