struct ListNode* removeElements(struct ListNode* head, int val) {
    if(head==NULL)
        return NULL;
    struct ListNode *dummy = (struct ListNode *)malloc(sizeof(struct ListNode));
    dummy->next=head;
    struct ListNode *prev=dummy,*curr=head,*temp;
    while(curr!=NULL){
        if(curr->val==val){
            temp = curr;
            prev->next = curr->next;
            curr = curr->next;
            free(temp);
        }
        else
            {
            prev=curr;
            curr=curr->next;
            }
    }
    return dummy->next;
}
