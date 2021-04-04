void Solution::merge(vector<int> &A, vector<int> &B) {
    vector<int> C;
    int i=0,j=0,n1=A.size(),n2=B.size();
    while(i<n1&&j<n2)
    {
        if(A[i]<B[j]){
            C.push_back(A[i]);
            i++;
        }
        else{
            C.push_back(B[j]);
            j++;
        }
    }
    if(i<n1){
        while(i<n1){
            C.push_back(A[i]);
            i++;
        }
    }
    if(j<n2){
        while(j<n2){
            C.push_back(B[j]);
            j++;
        }
    }
    A=C;
}
