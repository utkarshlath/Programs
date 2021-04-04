int Solution::diffPossible(vector<int> &A, int B) {
    int n=A.size();
    if(n==1)
        return 0;
    int i=0,j=1;
    while(i<n&&j<n){
        if(A[j]-A[i]==B&&i!=j)
            return 1;
        else if(A[j]-A[i]>B)
            i++;
        else j++;
    }
    return 0;
}
