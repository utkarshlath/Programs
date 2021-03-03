long long int power(int x, int n, int d){
    if(n==0)
        return 1;
    long long int temp = power(x,n/2,d);
    if(n%2==0)
        return ((temp%d)*(temp%d))%d;
    else
        return ((x%d)*(((temp%d)*(temp%d))%d)%d);
}
int Solution::pow(int x, int n, int d) {
    
    if(x<0)
        x+=d;
    if(x==0)
        return 0;
    long long int ans=power(x,n,d);
    return ans%d;
}