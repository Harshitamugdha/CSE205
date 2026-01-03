#include <bits/stdc++.h>
using namespace std;

bool dfsCycle(int node, int parent, vector<int> adj[], vector<bool>& visited) {
    visited[node] = true;

    for (int x : adj[node]) {
        if (!visited[x]) {
            if (dfsCycle(x, node, adj, visited))
                return true;
        }
        else if (x != parent) {
            return true;
        }
    }
    return false;
}

int main() {
    int V, E;
    cin >> V >> E;

    vector<int> adj[V];

    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(V, false);
    bool cycle = false;

    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            if (dfsCycle(i, -1, adj, visited)) {
                cycle = true;
                break;
            }
        }
    }

    if (cycle)
        cout << "Cycle exists";
    else
        cout << "No cycle";

    return 0;
}
