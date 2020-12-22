#include<bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<int> *adj;
    public:
    Graph(int V);
    pair<int,int> bfs(int u);
    void addEdge(int v,int w);
    int findLongest();
};
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}
pair<int,int> Graph::bfs(int u)
{
    int distance[V];
    memset(distance,-1,sizeof(distance));
    queue<int> q;
    q.push(u);
    distance[u]=0;
    while(!q.empty())
    {
        int v = q.front();
        q.pop();
        for(auto i=adj[v].begin();i!=adj[v].end();i++)
        {
            
            if((distance[*i])==-1)
            {
                q.push(*i);
                distance[*i] = distance[v]+1;
            }    
        }
    }
    int maxdist=0, maxnode;
    for(int i=0;i<V;i++)
    {
        if(distance[i]>maxdist)
        {
            maxdist = distance[i];
            maxnode = i;
        }
    }
    return make_pair(maxnode,maxdist); 
}
int Graph::findLongest()
{
    
    pair<int,int> p;
    p = bfs(0);
    p = bfs(p.first);
    return p.second;
}
int main()
{
    int n,u,v;
    cin>>n;
    Graph g(n);
    for(int i=0;i<n-1;i++)
    {   
        cin>>u>>v;
        g.addEdge(u-1,v-1);
    }
    cout<<g.findLongest();
    return 0;
}