int Solution::solve(string A) {
    stack<char> s;
    int n=A.length();
    for(int i=0;i<n;i++){
        if(A[i]=='('||A[i]=='['||A[i]=='{')
            s.push(A[i]);
        else if(s.size()){
            char check = s.top();
            char c = A[i];
            s.pop();
            switch(c){
                case ')': if(check!='(') return 0; break;
                case '}': if(check!='{') return 0; break;
                case ']': if(check!='[') return 0; break;
            }
        }
        else
            return 0;
    }
    if(s.empty())
        return 1;
    return 0;
}
