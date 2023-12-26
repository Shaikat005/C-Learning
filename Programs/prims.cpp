#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 6;
vector<pair<int, int>> adj_list[N];
//vector<pair<int, int>>mstEdges;
int visited[N], nodes, edges, u, v, w, source, cost = 0;

set< pair<int, pair<int,int>> > mySet;
void primsMST(int src){
    visited [src] = 1;
    for(auto adj_entry :adj_list[src]){
        int edge_cost = adj_entry.second;
        int adj_node = adj_entry.first;
        if(!visited[adj_node]){
            mySet.insert({edge_cost, {src, adj_node}});
        }
    }
    while (!mySet.empty()){
        auto myIt = *mySet.begin();
        mySet.erase(mySet.begin());
        int myParent = myIt.second.first;
        int myChild = myIt.second.second;
        int weight = myIt.first;
        if(!visited[myChild]){
            cost += weight;
            // mstEdges.push_back({myParent, myChild});
            cout<<myParent<<"-"<<myChild<<" -> "<<weight<<"\n";
            primsMST(myChild);
        }
    }
}
int main() {
        cin >> nodes >> edges;
        while (edges--) {
            cin >> u >> v >> w;
            adj_list[u].push_back({v, w});
            adj_list[v].push_back({u, w});
        }
        cout<<"Enter the source vertex: ";
        cin >> source;
        cout<<"\nThe path connection with cost (node-node -> cost) is- "<<"\n";
        primsMST(source);
        cout<<"MST (Prim's) Cost : "<<cost<<"\n";
    return 0;
}
/*

------Input------

5 7
1 2 5
2 3 3
2 5 2
3 5 20
1 4 100
4 5 3
1 5 6
1
*/

