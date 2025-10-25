// Kruskal’s Algorithm (for MST)
// Logic: Sort all edges. Use Union-Find (Disjoint Set Union) to join components by lowest-cost edge that does not form a cycle, until all nodes are connected.


struct Edge {
    int u, v, w;
    bool operator<(const Edge& other) const { return w < other.w; }
};
struct DSU {
    vector<int> parent, rank;
    DSU(int n): parent(n), rank(n, 0) {
        iota(parent.begin(), parent.end(), 0);
    }
    int find(int x) { return parent[x] == x ? x : parent[x] = find(parent[x]); }
    bool unite(int x, int y) {
        x = find(x), y = find(y);
        if (x == y) return false;
        if (rank[x] < rank[y]) swap(x,y);
        parent[y] = x;
        if (rank[x] == rank[y]) rank[x]++;
        return true;
    }
};
int kruskalMST(int n, vector<Edge>& edges) {
    sort(edges.begin(), edges.end());
    DSU dsu(n);
    int sum = 0, count = 0;
    for (auto& e : edges) {
        if (dsu.unite(e.u, e.v)) {
            sum += e.w;
            count++;
        }
    }
    return (count == n-1) ? sum : -1; // MST found only if n-1 edges used
}


// Input: edges is a list of all edges (Edge {from, to, weight})

// Time Complexity: O(ElogE) (sort + fast union-find)

// Space Complexity: O(V+E)