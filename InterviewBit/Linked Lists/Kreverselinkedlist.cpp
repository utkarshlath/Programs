/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A, int B) {
    if(A==NULL||B==1)
        return A;
    ListNode *head,*prev=NULL,*curr=A,*next;
    for(int i=0;i<B;i++){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    A->next=curr;
    if(curr==NULL)
        return head;
    A->next=reverseList(curr,B);
    return head;
}
