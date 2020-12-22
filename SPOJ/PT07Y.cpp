#include<iostream>
#include<list>
#include<limits.h>
using namespace std;

class Graph
{
    int V;
    list<int> *adj;
    bool isCyclic(int v, bool visited[], int parent);
    public:
    Graph(int V);
    void addEdge(int v,int w);
    bool isTree();
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
bool Graph::isCyclic(int v, bool visited[], int parent)
{
    visited[v]=true;
    list<int>::iterator i;
    for(i=adj[v].begin();i!=adj[v].end();i++)
    {
        if(!(visited[*i]))
        {
            if(isCyclic(*i,visited,v))
                return true;
        }    
        else if(*i!=parent)
            return true;
    }
    return false;
}
bool Graph::isTree()
{
    bool *visited = new bool[V];
    for(int i=0;i<V;i++)
        visited[i]=false;
    if(isCyclic(0,visited,-1))
        return false;
    for(int i=0;i<V;i++)
        if(visited[i]==false)
            return false;
    return true;
}
int main()
{
    int n,m,u,v;
    cin>>n>>m;
    Graph g(n);
    for(int i=0;i<m;i++)
    {   
        cin>>u>>v;
        g.addEdge(u-1,v-1);
    }
    if(g.isTree())
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}