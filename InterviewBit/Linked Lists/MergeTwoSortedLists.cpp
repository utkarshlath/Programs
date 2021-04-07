/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode* newHead=NULL;
    if(A==NULL)
        return B;
    if(B==NULL)
        return A;
    if(A->val<=B->val){
        newHead=A;
        newHead->next=mergeTwoLists(A->next,B);
    }
    else{
        newHead=B;
        newHead->next=mergeTwoLists(A,B->next);
    }
    return newHead;
}
