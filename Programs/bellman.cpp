#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
const int INF = 1e9;

set<int>nds;
vector< pair<int, int> >adj_list[N];
int dist[N];

int main() {
    int nodes, edges;
    cin >> nodes >> edges;
    for(int i = 0 ; i < edges ; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        nds.insert(u);
        nds.insert(v);
        adj_list[u].push_back({ v, w });
    }
    for (int i: nds){
        dist[i] = INF;
    }

    int src;
    cin>>src;
    dist[src] = 0;
    bool negative_cycle = false;

    for(int i: nds) {
        for(int node: nds) {
            for(pair<int, int> adj_node: adj_list[node]) {
                int parent_node = node;
                int curr_node = adj_node.first;
                int cost = adj_node.second;

                if(dist[parent_node]+cost < dist[curr_node]) {
                    dist[curr_node] = dist[parent_node]+cost;
                    if(i == nodes) {
                        negative_cycle = true;
                    }
                }
            }
        }
    }
    if(negative_cycle == true) {
        cout << "Graph has negative Cycle";
    } else {
        for (int it: nds){
            cout<<"Source to node: "<<it<<", Cost="<<dist[it]<<"\n";
        }
    }
    cout << "\n";
    return 0;
}
