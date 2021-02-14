int Solution::isPalindrome(string A) {
    string x = "";
    for(int i=0;i<A.length();i++)
    {
        int test = int(A[i]);
        if((test>=65&&test<=90)||(test>=97&&test<=122)||(test>=48&&test<=57))
            x+=A[i];
    }
    transform(x.begin(),x.end(),x.begin(),::tolower);
    string xrev = x;
    reverse(x.begin(),x.end());
    if(x==xrev)
        return 1;
    return 0;
}