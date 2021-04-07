/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    if(A->next==NULL||A==NULL)
        return A;
    ListNode* temp=A;
    ListNode* prev=A;
    temp=temp->next;
    while(temp!=NULL){
        if(temp->val==prev->val){
            prev->next=temp->next;
            temp=temp->next;
        }
        else{
            prev=temp;
            temp=temp->next;
        }
    }
    return A;
}
