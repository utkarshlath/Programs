int binarysearch(vector <int> &v, int x) 
{ 
    int low = 0, high = v.size()-1; 
    while (low <= high) 
    { 
        int mid = (low + high)/2; 
        if (v[mid] <= x) 
            low = mid + 1; 
        else if (v[mid] > x && v[mid-1] <= x) 
            return mid; 
        else if (v[mid] > x && mid == 0) 
            return mid; 
        else
            high = mid-1; 
    } 
    return -1; 
} 
int Solution::solve(int B, vector<int> &A) {
    vector<int> prefix(B), suffix(B);
    int count=0;
    prefix[0]=A[0];
    for(int i=1;i<B;i++)
        prefix[i] = prefix[i-1]+A[i];
    int sum = prefix[B-1];
    if(sum%3!=0)
        return 0;
    suffix[B-1]=A[B-1];
    for(int i=B-2;i>=0;i--)
        suffix[i] = suffix[i+1]+A[i];
    vector <int> v; 
    for(int i=0; i<B; i++) 
        if(suffix[i] == sum/3) 
            v.push_back(i);
    for (int i=0; i<B; i++) 
    { 
        if (prefix[i] == sum/3) 
        { 
            int res = binarysearch(v, i+1); 
            if (res != -1) 
                count += v.size() - res; 
        } 
    } 
    return count; 
}