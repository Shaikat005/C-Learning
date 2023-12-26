#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Graph
{
    map<T, list<T>> mymap;

public:
    void addEdge(T x, T y)
    {
        mymap[x].push_back(y);
        mymap[y].push_back(x);
    }

    void dfs_helper(T src, map<T, bool> &visited)
    {
        // RECURSIVE FUNCTION THAT WILL TRAVERSE THE GRAPH
        cout << src << " ";
        visited[src] = true;

        // go to all neighbors of that node that are not visited
        for (T nbr : mymap[src])
        {
            if (!visited[nbr])
            {
                dfs_helper(nbr, visited);
            }
        }
    }

    void dfs(T src)
    {
        map<T, bool> visited;

        // initializing visited map
        for (auto p : mymap)
        {
            T node = p.first;
            visited[node] = false;
        }

        // call the helper function
        dfs_helper(src, visited);
    }
};

int main()
{
    Graph<int> g;
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 5);
    g.addEdge(0, 3);

    g.dfs(0); // corrected the function call to 'dfs'

    return 0;
}
