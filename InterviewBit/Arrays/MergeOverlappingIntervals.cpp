/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool compare(Interval a, Interval b)
{
    return a.start<b.start;
}
vector<Interval> Solution::merge(vector<Interval> &A) {
    vector<Interval>  ans;
    sort(A.begin(),A.end(),compare);
    if(A.size()<=1)
        return A;
    Interval interval=A[0];
    for(int i=1;i<A.size();i++)
    {    
        if(interval.end>=A[i].start)
            interval.end=max(A[i].end,interval.end);
        else
        {
            ans.push_back(interval);
            interval.start=A[i].start;
            interval.end=A[i].end;
        }
    }
    ans.push_back(interval);
    return ans;
}