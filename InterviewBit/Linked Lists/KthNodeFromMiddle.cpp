/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int findLength(ListNode* A){
    ListNode* temp = A;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
int Solution::solve(ListNode* A, int B) {
    int n = findLength(A);
    if(n==0)
        return -1;
    int mid=(n/2)+1;
    int node=mid-B;
    if(node<=0)
        return -1;
    int count=1;
    ListNode* temp = A;
    while(count<node){
        count++;
        temp=temp->next;
    }
    return temp->val;
}
