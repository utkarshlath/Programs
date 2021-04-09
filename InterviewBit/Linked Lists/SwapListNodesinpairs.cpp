/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    if(A==NULL||A->next==NULL)
        return A;
    ListNode* temp=A->next;
    ListNode* next=temp->next;
    A->next=swapPairs(next);
    temp->next=A;
    return temp;
}
