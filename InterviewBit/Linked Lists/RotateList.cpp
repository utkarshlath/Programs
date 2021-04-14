/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    ListNode* temp = A;
    int count = 0;
    while(temp->next){
        temp = temp->next;
        count++;
    }
    B = B%(++count);
    temp->next = A;
    for(int i=0;i<count-B;i++){
        temp = temp->next;
    }
    ListNode* head = temp->next;
    temp->next = NULL;
    return head;
}
