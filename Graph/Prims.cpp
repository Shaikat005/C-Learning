#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int INF = INT_MAX;
const int N = 1e5 + 5;

vector<pair<int, int>> adj_list[N];
vector<bool> visited(N, false);

int primMST(int start) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int totalCost = 0;

    pq.push({0, start});

    while (!pq.empty()) {
        int u = pq.top().second;
        int cost = pq.top().first;
        pq.pop();

        if (visited[u])
            continue;

        totalCost += cost;
        visited[u] = true;

        for (const auto &neighbor : adj_list[u]) {
            int v = neighbor.first;
            int edgeCost = neighbor.second;

            if (!visited[v])
                pq.push({edgeCost, v});
        }
    }

    return totalCost;
}

int main() {
    int nodes, edges;
    cout << "Enter the number of vertices and edges: ";
    cin >> nodes >> edges;

    cout << "Enter the connected vertices and corresponding edge weights:\n";
    for (int i = 0; i < edges; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj_list[u].push_back({v, w});
        adj_list[v].push_back({u, w});
    }

    int startNode;
    cout << "Enter the starting node: ";
    cin >> startNode;

    int minCost = primMST(startNode);

    cout << "Minimum Cost of Spanning Tree: " << minCost << endl;

    return 0;
}
