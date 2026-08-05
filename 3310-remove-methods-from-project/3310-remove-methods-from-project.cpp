class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        
        vector<vector<int>> adj(n);

        for (auto &it : invocations) {
            adj[it[0]].push_back(it[1]); //  For eg: [1,2] = adj[1] = {2}, [0,1] = adj[0] = {1}, basically creating an adjacency matrix...
        }

        vector<int> healthy;
        vector<int> contaminated;
        vector<bool> vis(n, false);

        queue<int> q;
        q.push(k);
        vis[k] = true;

        // Here, I am currently finding all contaminated vertices
        while (!q.empty()) {
            int u = q.front();
            q.pop();

            contaminated.push_back(u);

            for (int neighbour : adj[u]) {
                if (!vis[neighbour]) {
                    vis[neighbour] = true;
                    q.push(neighbour);
                }
            }
        }

        // Here I am finding that if healthy --> contaminated, then I will return the entire array.
        for (auto &it : invocations) {
            int u = it[0];
            int v = it[1];

            if (!vis[u] && vis[v]) {
                vector<int> ans;

                for (int i = 0; i < n; i++) {
                    ans.push_back(i);
                }

                return ans;
            }
        }

        // Store all healthy vertices
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                healthy.push_back(i);
            }
        }

        return healthy;
    }
};