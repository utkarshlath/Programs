vector<int> Solution::maxset(vector<int> &A) {
    vector<int> ans,check;
    long long int sum=0,maxsum=-1;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]>=0)
        {
            sum+=A[i];
            check.push_back(A[i]);
        }
        if(A[i]<0||i==A.size()-1)
        {
            if(sum>maxsum)
            {
                maxsum=sum;
                ans=check;
            }
            sum=0;
            check.clear();
        }
    }
    return ans;
}