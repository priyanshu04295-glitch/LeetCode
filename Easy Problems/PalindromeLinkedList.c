
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

bool isPalindrome(struct ListNode* head) {
    if(head==NULL || head->next==NULL)
    {
        return true;
    }

    struct ListNode* slow=head;
    struct ListNode* fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }

    struct ListNode* secondHalf=reverseList(slow->next);

    struct ListNode* p1=head;
    struct ListNode* p2 = secondHalf;
    bool result = true;

    while(p2!=NULL)
    {
        if(p1->val!=p2->val)
        {
            result=false;
            break;
        }
        p1=p1->next;
        p2=p2->next;
    }
    slow->next = reverseList(secondHalf);

    return result;
}