/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *l3= (struct ListNode * )malloc(sizeof(struct ListNode));
    struct ListNode *p=l3;
    int carry=0,sum=0;
    while(l1!=NULL || l2!=NULL || carry!=0){
        sum = (l1!=NULL ? l1->val : 0) + (l2!=NULL ? l2->val:0) + carry;
        carry = sum / 10;
        p->next=(struct ListNode * )malloc(sizeof(struct ListNode));
        p=p->next;
        p->val = sum % 10;
        p->next=NULL;
        if(l1!=NULL) l1=l1->next;
        if(l2!=NULL) l2=l2->next;
    }
    struct ListNode* res= l3->next;
    free(l3);
    return res;
}
