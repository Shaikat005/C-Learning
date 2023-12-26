#include<bits/stdc++.h>
using namespace std;

int nodes,edges;
const int N=1e4;
const int INF=1e4+8;
int i,j,k;
int dist[N],visited[N];

vector<pair<int,int>> adj_list[N];

void dijkstra(int src)
{
    for(i=1;i<=nodes;i++)
    {
        dist[i]=INF;
    }
    dist[src]=0;

    for(i=0;i<nodes;i++){
            int SN=-1;
        for(j=1;j<=nodes;j++){
            if(visited[j]==1) continue;
            else if(SN==-1 || dist[SN]>dist[j])
                SN=j;
        }

        visited[SN]=1;

        for(pair<int,int> adj_entry : adj_list[SN]){
            int adj_node=adj_entry.first;
            int edge_cost=adj_entry.second;
            if(dist[SN]+edge_cost<dist[adj_node])
                dist[adj_node]=dist[SN]+edge_cost;
        }
    }

}

int main()
{
    cin>>nodes>>edges;

        int u,v,w;

        for(i=1;i<=edges;i++)
        {
            cin>>u>>v>>w;
            adj_list[u].push_back({v,w});
            adj_list[v].push_back({u,w});
        }

    int src=1;
    dijkstra(src);

    for(i=1;i<=nodes;i++)
        cout<<dist[i]<<" ";
}
