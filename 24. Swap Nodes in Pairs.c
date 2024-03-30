struct ListNode* swapPairs(struct ListNode* head) {
    if(!head || !head->next) return head;
    struct ListNode *dummy=(struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->next=head;
    struct ListNode *prev=dummy,*curr=head;
    while(curr && curr->next){
        prev->next=curr->next;
        curr->next=prev->next->next;
        prev->next->next = curr;
        prev=curr;
        curr=curr->next;
    }
    return dummy->next;
}
