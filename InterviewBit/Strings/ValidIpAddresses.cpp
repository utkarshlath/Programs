bool isValid(string s){
    if(s.length()>3)
        return false;
    if(s[0]=='0'&&s.length()>1)
        return false;
    int val = stoi(s);
    return val>=0&&val<=255;
}
vector<string> Solution::restoreIpAddresses(string A) {
    vector<string> ans;
    int n=A.length();
    for(int i=1;i<n&&i<4;i++){
        string first = A.substr(0,i);
        if(!isValid(first))
            continue;
        for(int j=1;i+j<n&&j<4;j++){
            string second = A.substr(i,j);
            if(!isValid(second))
                continue;
            for(int k=1;k<4&&i+j+k<n;k++){
                string third = A.substr(i+j,k);
                string fourth = A.substr(i+j+k);
                if(!isValid(third)||!isValid(fourth))
                    continue;
                ans.push_back(first+"."+second+"."+third+"."+fourth);
            }
        }
    }
    return ans;
}