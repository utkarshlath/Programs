/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    if(A==NULL)
        return B;
    if(B==NULL)
        return A;
    int sum=0,carry=0;
    ListNode* C = new ListNode(-1);
    ListNode* newHead = C;
    while(A||B||carry){
        sum = (A?A->val:0)+(B?B->val:0)+carry;
        carry=sum/10;
        A = A?A->next:NULL;
        B = B?B->next:NULL;
        C->next = new ListNode(sum%10);
        C=C->next;
    }
    return newHead->next;
}
