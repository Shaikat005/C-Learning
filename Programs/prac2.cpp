#include<bits/stdc++.h>
using namespace std;

int nodes,edges,i,j;
const int N=1e5;
const int INF=1e7;

vector<pair<int,int>> adj_list[N];
int dist[N], visited[N];

void dijkstraAlgo(int src)
{
    for(i=1;i<=nodes;i++)
        dist[i]=INF;

    dist[src]=0;
    for(i=1;i<=nodes;i++)
    {
        int SN=-1;
        for(j=1;j<=nodes;j++)
        {
            if(visited[j]==1) continue;
            if(SN==-1 || dist[SN]>dist[j])
                SN=j;
        }

        visited[SN]=1;

        for(pair<int,int> adj_entry : adj_list[SN])
        {
            int adj_node=adj_entry.first;
            int edge_cost=adj_entry.second;
            if(dist[SN]+edge_cost < dist[adj_node])
                dist[adj_node]= dist[SN]+edge_cost;
        }
    }
}

int main()
{
    int u,v,w;
    cin>>nodes>>edges;

    for(i=0;i<edges;i++)
    {
        cin>>u>>v>>w;
        adj_list[u].push_back({v,w});
        adj_list[v].push_back({u,w});
    }

    int src=1;
    dijkstraAlgo(src);
    for(i=1;i<=nodes;i++)
        cout<<dist[i]<<" ";
}
