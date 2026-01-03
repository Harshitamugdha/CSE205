#include <bits/stdc++.h>
using namespace std;

void bfs(int start, vector<int> adj[], int V) {
vector<bool> v(V,false);
queue<int> q;

v[start]=true;
q.push(start);

while(!q.empty()){
    int node=q.front();
    q.pop();
    cout<<node<<" ";
    for(int i: adj[node]){
        if(!v[i]){
            v[i]=true;
            q.push(i);
        }
    }
}
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

    int start;
    cin >> start;

    bfs(start, adj, V);

    return 0;
}
