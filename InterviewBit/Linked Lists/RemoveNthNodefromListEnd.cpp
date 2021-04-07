/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode* temp = A;
    int size=0;
    while(temp!=NULL){
        temp=temp->next;
        size++;
    }
    if(size==1||size==0)
        return NULL;
    if(B>=size){
        A=A->next;
        return A;
    }
    int toRemove=size-B;
    temp=A;
    for(int i=1;i<toRemove;i++)
        temp=temp->next;
    temp->next=temp->next->next;
    return A;
}
