vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    vector<int> ans;
    int n1=A.size(),n2=B.size(),i,j;
    for(i=0,j=0;i<n1&&j<n2;){
        if(A[i]<B[j])
            i++;
        else if(B[j]<A[i])
            j++;
        else{
            ans.push_back(A[i++]);
            j++;
        }
    }
    return ans;
}
