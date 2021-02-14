int Solution::lengthOfLastWord(const string A) {
    int length=0,flag=0;
    string x = A,xnew="";
    reverse(x.begin(),x.end());
    for(int i=0;i<x.length();i++)
    {
        if(x[i]==' '&&flag==1)
            break;
        else if(x[i]==' ')
            continue;
        flag=1;
        xnew+=x[i];
    }
    return xnew.length();
}
