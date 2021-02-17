int Solution::solve(string A) {
    stack<char> s;
    int count=0;
    for(int i=0;i<A.length();i++)
    {
        if(A[i]=='(')
            s.push(A[i]);
        else if(!s.empty()&&A[i]==')'&&s.top()=='(')
            s.pop();
        else
            count++;
    }
    count+=s.size();
    return count;
}