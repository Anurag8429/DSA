class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source == destination){
            return true;
        }
        vector<vector<int>>adj(n);
        for(int i=0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        queue<int>q;
        vector<int>visited(n,0);
        q.push(source);
        visited[source]=1;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(int i=0;i<adj[node].size();i++){
                if(!visited[adj[node][i]]){
                    if(adj[node][i]==destination){
                        return true;
                    }
                    visited[adj[node][i]]=1;
                    q.push(adj[node][i]);
                }
            }
        }

        return false;
    }
};