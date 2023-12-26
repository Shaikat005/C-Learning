#include<bits/stdc++.h>
using namespace std;
int nodes, edges;
const int N = 1e5 + 5;

vector<pair<int,int>> adj_list[N];
int dis[N], visited[N];

void dijkstraAlgo(int src){
    for (int i=1; i<=nodes; i++){
        dis[i] = INT_MAX;
    }
    dis[src] = 0;
    for (int i = 0; i < nodes; i++){
        int selectedNode = -1;
        for (int j = 1; j <= nodes; j++){
            if(visited[j] == 1) continue;
            if(selectedNode == -1 || dis[selectedNode] > dis[j]){
                selectedNode = j;
            }
        }
        visited[selectedNode] = 1;
        for(pair<int,int> adj_entry : adj_list[selectedNode]){
            int adj_Node = adj_entry.first;
            int edge_Cost = adj_entry.second;
            if(dis[selectedNode] + edge_Cost < dis[adj_Node]){
                dis[adj_Node] = dis[selectedNode] + edge_Cost;
            }
        }
    }

}
int main(){
    cin >> nodes >> edges;
    for (int i = 0; i < edges; i++){
        int u, v, w;
        cin >> u >> v >> w;
        adj_list[u].push_back({v,w});
        adj_list[v].push_back({u,w});
    }
    int src = 1;
    dijkstraAlgo(src);
    for (int i = 1; i <= nodes; i++){
        cout << dis[i] << " ";
    }
    return 0;
}

/*input

4 4
1 2 24
2 4 20
3 1 3
4 3 12
*/

