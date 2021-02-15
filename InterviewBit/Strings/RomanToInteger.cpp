int Solution::romanToInt(string A) {
    int sum=0;
    map<char, int> val; 
    val.insert(pair<char, int>('I', 1)); 
    val.insert(pair<char, int>('V', 5)); 
    val.insert(pair<char, int>('X', 10)); 
    val.insert(pair<char, int>('L', 50)); 
    val.insert(pair<char, int>('C', 100)); 
    val.insert(pair<char, int>('D', 500)); 
    val.insert(pair<char, int>('M', 1000)); 
    for(int i=0;i<A.length();i++)
    {
        auto itr1 = val.find(A[i]);
        int value1 = itr1->second;
        if(i!=0)
        {
            auto itr2 = val.find(A[i-1]);
            int value2 = itr2->second;
            if(value2<value1)
                sum-=(2*value2);
        }
        sum+=value1;
    }
    return sum;
}