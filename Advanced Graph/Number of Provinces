/*
Number of Provinces (Connected Components in Undirected Graph)
Problem: Given an adjacency matrix representing 'n' cities, find the number of connected groups (provinces).

Logic: Every DFS/BFS call for an unvisited node marks a new province.

Code (C++): */

void dfs(vector<vector<int>>& adj, vector<bool>& visited, int u) {
    visited[u] = true;
    for (int v = 0; v < adj.size(); ++v)
        if (adj[u][v] && !visited[v])
            dfs(adj, visited, v);
}

int findCircleNum(vector<vector<int>>& adj) {
    int n = adj.size(), provinces = 0;
    vector<bool> visited(n, false);
    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            provinces++;
            dfs(adj, visited, i);
        }
    }
    return provinces;
}

// Time Complexity: O(n^2)
// Space Complexity: O(n)
