int Solution::gcd(int A, int B) {
    if(A==0)
        return B;
    if(B==0)
        return A;
    int mini = min(A,B);
    for(int i=mini;i>=1;i--)
        if(A%i==0&&B%i==0)
            return i;
}