string Solution::solve(string A) {
    if(A.length()<=1)
        return "-1";
    string temp = A;
    sort(temp.begin(),temp.end(),greater<char>());
    if(temp==A)
        return "-1";
    sort(temp.begin(),temp.end());
    if(temp==A)
    {
        swap(A[A.length()-1],A[A.length()-2]);
        return A;
    }
    long long int index,i;
    for(i=A.length()-2;i>=0;i--){
        if(A[i]<A[i+1])
        {
            index=i;
            break;
        }
    }
    int min=INT_MAX, min_idx;
    for(i=index+1;i<A.length();i++)
    {
        if(A[i]-A[index]>0&&A[i]-A[index]<min)
        {
            min=A[i]-A[index];
            min_idx=i;
        }
    }
    swap(A[index],A[min_idx]);
    sort(A.begin()+index+1,A.end());
    return A;
}