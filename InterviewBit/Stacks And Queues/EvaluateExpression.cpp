int Solution::evalRPN(vector<string> &A) {
    stack<int> eval;
    for(int i=0;i<A.size();i++){
        if(A[i]=="*"||A[i]=="/"||A[i]=="+"||A[i]=="-"){
            int x1=eval.top();
            eval.pop();
            int x2=eval.top();
            eval.pop();
            switch(A[i][0]){
                case '*': eval.push(x1*x2);break;
                case '+': eval.push(x1+x2);break;
                case '-': eval.push(x2-x1);break;
                case '/': eval.push(x2/x1);break;
            }
        }
        else{
            eval.push(stoi(A[i]));
        }
    }
    return eval.top();
}
