string Solution::addBinary(string A, string B) {
    string Arev = A;
    reverse(Arev.begin(),Arev.end());
    string Brev = B;
    reverse(Brev.begin(),Brev.end());
    string ans="";
    int carry=0;
    while(Arev.size() != Brev.size()){
        if(Arev.size() < Brev.size())
            Arev.push_back('0');
        else if(Arev.size() > Brev.size())
            Brev.push_back('0');
    }
    int len = Arev.length();
    if(len==0) 
        return Arev;
    for(int i=0;i<len;i++){
        int a = Arev[i]-'0';
        int b = Brev[i]-'0';
        int val = a+b+carry;
        ans+=((val%2)+'0');
        carry=(val)/2;
    }
    
    if(carry != 0) 
        ans.push_back(carry+'0');
    while(ans.size() > 0 && ans[ans.size()-1] == '0') 
        ans.pop_back();
    reverse(ans.begin(),ans.end());
    return ans;
}