class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        vector<vector<int>>adj(n);
        for(int i=0;i<relations.size();i++){
            adj[relations[i][0]-1].push_back(relations[i][1]-1);
        }

        vector<int>Ind(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<adj[i].size();j++){
                Ind[adj[i][j]]++;
            }
        }

        queue<int>q;
        for(int i=0;i<n;i++){
            if(!Ind[i]){
                q.push(i);
            }
        }

        vector<int>ct(n,0);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(int i=0;i<adj[node].size();i++){
                Ind[adj[node][i]]--;
                if(!Ind[adj[node][i]]){
                    q.push(adj[node][i]);
                }

                ct[adj[node][i]] = max(ct[adj[node][i]],ct[node] + time[node]);
            }
        }

        int ans = 0;
        for(int i=0;i<n;i++){
            ans = max(ans,ct[i]+time[i]);
        }

        return ans;
    }
};