/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A, int b) {
    if(A==NULL)
        return A;
    ListNode *prev=NULL,*curr=A,*next,*head;
    for(int i=0;i<b;i++){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    A->next=curr;
    if(curr==NULL) 
        return head;
    for(int i=0;i<b-1;i++)
        curr=curr->next;
    curr->next=solve(curr->next,b);
    return head;
}