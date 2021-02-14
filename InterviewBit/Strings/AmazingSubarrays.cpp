int Solution::solve(string A) {
    transform(A.begin(),A.end(),A.begin(),::tolower);
    long int counter=0;
    for(int i=0;i<A.length();i++)
    {
        if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u')
        {
            counter += (A.length()-i)%10003;
            counter%=10003;
        }
    }
    return counter;
}