#include<bits/stdc++.h>
using namespace std;

const int N=1e4;
const int INF=1e4;
int nodes,edges,i,j,k;
int dist[N][N];

void FW()
{
    for(i=1;i<=nodes;i++)
    {
        if(i==j) dist[i][j]=0;
        else dist[i][j]=INF;
    }

    for(int i=1;i<=edges;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        dist[u][v]=min(dist[u][v],w);
    }

    for(k=1;k<=nodes;k++){
        for(int u=1;u<=nodes;u++){
            for(int v=1;v<=nodes;v++){
                dist[u][v]=min(dist[u][v],dist[u][k]+dist[k][v]);
            }
        }
    }

       for(i=1;i<=nodes;i++){
        for(j=1;j<=nodes;j++){
            if(dist[i][j]==INF) cout<<-1;
            else
                cout<<dist[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
    cin>>nodes>>edges;
    FW();
}
