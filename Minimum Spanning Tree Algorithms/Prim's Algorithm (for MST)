// Prim’s Algorithm (for MST)
// Logic: Always grow a tree by adding the lowest-weight edge from the covered set to an uncovered node, until all nodes are included.

// C++ Code (using Priority Queue):

int primMST(int n, vector<vector<pair<int, int>>>& adj) {
    vector<bool> inMST(n, false);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0, 0}); // weight, node
    int sum = 0;
    while (!pq.empty()) {
        auto [weight, u] = pq.top(); pq.pop();
        if (inMST[u]) continue;
        sum += weight;
        inMST[u] = true;
        for (auto [v, w] : adj[u]) {
            if (!inMST[v]) pq.push({w, v});
        }
    }
    return sum;
}

// Input: adj is adjacency list (adj[u] = {{v, w}, ...} means edge u-v weight w)

Time Complexity: O(ElogV) (priority queue with up to E edges)

Space Complexity: O(V+E)
