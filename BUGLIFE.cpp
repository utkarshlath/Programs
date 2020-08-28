#include<bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<int> *adj;
    public:
    Graph(int V);
    void addEdge(int x, int y);
    bool checkNormalBugs();
    bool isBipartite(int src, int color[]);
};
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
void Graph::addEdge(int x, int y)
{
    adj[x].push_back(y);
    adj[y].push_back(x);
}
bool Graph::isBipartite(int src, int color[])
{
    color[src]=1;
    queue<int> q;
    q.push(src);
    while(!q.empty())
    {
        int vertex = q.front();
        q.pop();
        list<int>::iterator i; 
        for(i=adj[vertex].begin();i!=adj[vertex].end();i++)
        {
            if(*i==vertex)
                return false;
            if(color[*i]==-1)
            {
                color[*i]=1-color[vertex];
                q.push(*i);
            }
            else if(color[*i]==color[vertex])
                return false;  
        }
    }
    return true;
}
bool Graph::checkNormalBugs()
{
    int color[V];
    for(int i=0;i<V;i++)
        color[i]=-1;
    for(int i=0;i<V;i++)
    {
        if(color[i]==-1)
        {
            if(!isBipartite(i,color))
                return false;
        }
    }
    return true;
}
int main()
{
    long long int t,scenario=0;
    cin>>t;
    while(t--)
    {
        scenario++;
        long long int n,interactions;
        cin>>n>>interactions;
        Graph g(n);
        for(long long int i=0;i<interactions;i++)
        {
            int x,y;
            cin>>x>>y;
            g.addEdge(x-1,y-1);
        }
        if(g.checkNormalBugs())
            cout<<"Scenario #"<<scenario<<":\n"<<"No suspicious bugs found!"<<endl;
        else
            cout<<"Scenario #"<<scenario<<":\n"<<"Suspicious bugs found!"<<endl;
    }
}