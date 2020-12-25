int Solution::maxSubArray(const vector<int> &A) {
    int maxhere=0,maxsofar=INT_MIN;
    for(int i=0;i<A.size();i++)
    {
        maxhere += A[i];
        if(maxhere>maxsofar)
            maxsofar=maxhere;
        if(maxhere<0)
            maxhere=0;
    }
    return maxsofar;
}