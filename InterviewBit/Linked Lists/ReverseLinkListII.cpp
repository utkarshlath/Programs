/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    int count=1;
    if(B==C)
        return A;
    ListNode* curr=A,*prev=NULL,*next=NULL;
    for(int i=1;i<B;i++){
        prev=curr;
        curr=curr->next;
    }
    ListNode* temp1=curr,*temp2=NULL;
    for(int i=1;i<=C-B+1;i++){
        next=curr->next;
        curr->next=temp2;
        temp2=curr;
        curr=next;
    }
    temp1->next=curr;
    if (prev != NULL) {
        prev->next = temp2;
    }
    else {
        A = temp2;
    }
    return A;
}
