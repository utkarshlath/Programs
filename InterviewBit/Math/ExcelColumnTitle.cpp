string Solution::convertToTitle(int A) {
    string ans="";
    while(A){
        char x = char(A%26+64);
        if(A%26==0)
        {
            x='Z';
            A-=26;
        }
        ans +=x;
        A /= 26;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}