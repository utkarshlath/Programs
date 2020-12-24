vector<int> Solution::plusOne(vector<int> &A) {
    int n = A.size();
    int carry=0;
    if(A[n-1]<=8)
    {
        A[n-1]+=1;
        vector<int> v(A);
        reverse(v.begin(),v.end());
        while(v[v.size()-1]==0)
            v.pop_back();
        reverse(v.begin(),v.end());
        return v;
    }
    else
    {
        A[n-1]=0;
        carry=1;
    }
    for(int i=n-2;i>=0;i--)
    {
        if(carry==1)
        {
            if(A[i]<=8)
            {
                A[i]+=1;
                carry=0;
                break;
            }
            else
            {
                A[i]=0;
                carry=1;
            }
        }
    }
    if(carry==1)
        A.insert(A.begin(),1);
    vector<int> v(A);
    reverse(v.begin(),v.end());
    while(v[v.size()-1]==0)
        v.pop_back();
    reverse(v.begin(),v.end());
    return v;
}