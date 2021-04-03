int reverse(int n){
    int rev=0;
    while(n!=0){
        int lb=n&1;
        rev|=lb;
        rev<<=1;
        n>>=1;
    }
    rev>>=1;
    return rev;
}
int Solution::solve(int A) {
    int count=1,len=1;
    while(count<A){
        len++;
        int ele = (1<<((len-1)/2));
        count+=ele;
    }
    count-=(1<<((len-1)/2));
    int offset=A-count-1;
    
    int ans = (1<<(len-1));
    ans |= (offset<<(len/2));
    
    int rev = (ans>>(len/2));
    rev = reverse(rev);
    ans |=rev;
    return ans;
}
