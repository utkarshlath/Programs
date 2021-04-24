/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
void reverse(ListNode* node, ListNode** head){
    if(node->next==NULL){
        *head=node;
        return;
    }
    reverse(node->next,head);
    ListNode* temp = node->next;
    temp->next = node;
    node->next=NULL;
}
ListNode* Solution::reverseList(ListNode* A) {
    reverse(A,&A);
    return A;
}
