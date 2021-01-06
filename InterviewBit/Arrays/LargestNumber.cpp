bool check(int num1, int num2)
{
    string s1 = to_string(num1);
    string s2 = to_string(num2);
    string s1s2 = s1.append(s2);
    string s2s1 = s2.append(s1);
    return s1s2>s2s1;
}
string Solution::largestNumber(const vector<int> &A) {
    vector<int> vect = A;
    string ans;
    sort(vect.begin(),vect.end(), check);
    int flag=1;
    for(int i=0;i<vect.size();i++)
    {
        if(vect[i]!=0||i==vect.size()-1)
            flag=0;
        if(flag==0)
            ans+=to_string(vect[i]);
    }
    return ans;
}