int Solution::braces(string A) {
    stack<char> s;
    for(int i=0;i<A.length();i++){
        if(A[i]=='+'||A[i]=='-'||A[i]=='*'||A[i]=='/'||A[i]=='(')
            s.push(A[i]);
    }
    if(s.empty())
        return 0;
    int bracket=0,op=0;
    while(!s.empty()){
        if(s.top()=='('){
            bracket++;
        }
        else
            op++;
        if(bracket>op)
            return 1;
        s.pop();
    }
    return 0;
}
