vector<int> Solution::flip(string A) {
    int n = A.size();
    int s=0,maxsum=0,left=0,mleft,mright,len=0;
    for(int i=0;i<A.length();i++)
    {
        if(A[i]=='0')
        {
            ++s;
            ++len;
            if(s>maxsum)
            {
                maxsum=s;
                mleft=left;
                mright=i;
            }
        }
        else{
            --s;
            if(s<0){
                left=i+1;
                s=0;
            }
        }
    }
    if(len==0)
        return {};
    return {mleft+1,mright+1};
}