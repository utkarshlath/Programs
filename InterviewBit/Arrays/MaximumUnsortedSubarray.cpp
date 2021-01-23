vector<int> Solution::subUnsort(vector<int> &A) {
    vector<int> copy = A;
    sort(copy.begin(),copy.end());
    if(A==copy)
        return {-1};
    int i=0,j=A.size()-1;
    while(i<j)
    {
        if(A[i]!=copy[i]&&A[j]!=copy[j])
            return {i,j};
        else if(A[i]==copy[i]&&A[j]==copy[j])
        {
            i++;
            j--;
        }
        else if(A[i]==copy[i])
            i++;
        else
            j--;
    }
}