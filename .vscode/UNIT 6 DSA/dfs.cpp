#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[], vector<bool>& visited) {
    visited[node]=true;
    cout<<node<<" ";
    for(int i:adj[node]){
        if(!visited[i]){
            dfs(i,adj,visited);
        }
    }
}

int main() {
    int V, E;
    cin >> V >> E;

    vector<int> adj[V];

    for(int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(V, false);

    dfs(0, adj, visited);
    return 0;
}
