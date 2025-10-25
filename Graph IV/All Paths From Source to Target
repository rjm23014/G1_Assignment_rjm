 // Print All Paths from Source to Destination (All Paths in a Graph)
// Logic:
// Use DFS backtracking to explore all paths from source to destination, storing the current path.

class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> result;
        vector<int> path;
        dfs(graph, 0, path, result);
        return result;
    }
    
    void dfs(vector<vector<int>>& graph, int node, vector<int>& path, vector<vector<int>>& result) {
        path.push_back(node);
        if (node == graph.size() - 1) {
            result.push_back(path);
        } else {
            for (int next : graph[node]) {
                dfs(graph, next, path, result);
            }
        }
        path.pop_back();
    }
};


// Time Complexity: Exponential in worst case (O(2^V) for all possible paths)

// Space Complexity: Proportional to number/length of all found paths