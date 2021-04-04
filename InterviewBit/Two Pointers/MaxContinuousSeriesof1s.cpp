vector<int> Solution::maxone(vector<int> &A, int B) {
    int cl=0,cr=0,bl,br=0,noz=0;
    vector<int> ans;
    while(cr<A.size()){
        if(noz<=B){
            if(A[cr]==0)
                noz++;
            cr++;
        }
        if(noz>B){
            if(A[cl]==0) 
                noz--;
            cl++;
        }
        if(cr-cl>br-bl&&noz<=B){
            br=cr;
            bl=cl;
        }
    }
    for(int i=bl;i<br;i++)
        ans.push_back(i);
    return ans;
}
