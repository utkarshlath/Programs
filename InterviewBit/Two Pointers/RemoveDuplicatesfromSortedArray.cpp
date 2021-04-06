int Solution::removeDuplicates(vector<int> &A) {
    int n=A.size();
    if(n==1)
        return 1;
    int curr=1;
    for(int i=1;i<A.size();i++){
        if(A[i]==A[i-1]){
            continue;
        }
        else{
            A[curr++]=A[i];
        }
    }
    return curr;
}
