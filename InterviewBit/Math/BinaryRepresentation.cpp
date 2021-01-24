string Solution::findDigitsInBinary(int A) {
    if(A<2)
        return to_string(A);
    string ans="";
    while(A)
    {
        ans+=to_string(A%2);
        A/=2;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}