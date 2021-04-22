string Solution::solve(string A)
{
    map<char, int> m;
    queue<char> q;
    string ans;
    for (int i = 0; i < A.length(); i++)
    {
        m[A[i]]++;
        q.push(A[i]);
        while ((!q.empty()) && (m[q.front()] >= 2))
        {
            q.pop();
        }
        if (!q.empty())
            ans.push_back(q.front());
        else
            ans.push_back('#');
    }
    return ans;
}