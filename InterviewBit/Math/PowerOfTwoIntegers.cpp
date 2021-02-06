int Solution::isPower(int A) {
    if(A==1)
        return true;
    for(int i=2;i<=sqrt(A);i++)
    {
        float ans = log(A)/log(i);
        if(ans==floor(ans))
            return true;
    }
    return false;
}