string Solution::simplifyPath(string A) {
    vector<string> vec;
    stack<string> s;
    for(int i=1;i<A.size();i++){
        string temp="";
        while(A[i] != '/' && i<A.size()){
            temp.push_back(A[i]);
            i++;
        }
        if(temp==".")
            continue;
        else if(temp==".."&&s.size())
            s.pop();
        else if(temp.length()>0&&temp!=".."&&temp!=".")
            s.push(temp);
    }
    string ans="";
    while(!s.empty()){
        vec.push_back(s.top());
        vec.push_back("/");
        s.pop();
    }
    if(vec.size() == 0) vec.push_back("/");
    reverse(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++)
        ans+=vec[i];
    return ans;
}
