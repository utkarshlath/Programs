/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) {
    ListNode start(0), end(0);
    ListNode* front=&start, *rear=&end, *temp=A;
    while(temp!=NULL){
        if(temp->val<B){
            front->next=temp;
            front=front->next;
        }
        else{
            rear->next=temp;
            rear=rear->next;
        }
        temp=temp->next;
    }
    front->next=end.next;
    rear->next=NULL;
    return start.next;
}
