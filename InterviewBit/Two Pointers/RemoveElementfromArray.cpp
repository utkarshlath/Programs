int Solution::removeElement(vector<int> &A, int B) {
    int ans=0;
    for(int i=0;i<A.size();i++){
        if(A[i]!=B){
            A[ans++]=A[i];
        }
    }
    return ans;
}
