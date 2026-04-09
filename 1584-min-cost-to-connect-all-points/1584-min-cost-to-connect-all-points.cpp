class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        vector<int> dist(n, INT_MAX), vis(n,0);
        int ans = 0;
        dist[0] = 0;
        for(int i = 0; i < n; i++){
            int u = -1;
            for(int j = 0; j < n; j++){
                if(!vis[j] && (u == -1 || dist[j] < dist[u])) u = j;
            }
            ans += dist[u];
            vis[u] = 1;
            for(int v = 0; v < n; v++){
                int x = abs(points[u][0] - points[v][0]);
                int y = abs(points[u][1] - points[v][1]);
                if(!vis[v]) dist[v] = min(dist[v], x+y);
            }
        
        }
        return ans;
    }
};