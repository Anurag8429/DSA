class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses;
        int m  = prerequisites.size();
        vector<int>adj[n];
        vector<int>Ind(n,0);
        for(int i=0;i<m;i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
            Ind[prerequisites[i][0]]++;
        }

        queue<int>q;
        for(int i=0;i<n;i++){
            if(!Ind[i]){
                q.push(i);
            }
        }

        int ct = 0;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ct++;
            for(int i=0;i<adj[node].size();i++){
                Ind[adj[node][i]]--;
                if(!Ind[adj[node][i]]){
                    q.push(adj[node][i]);
                }
            }
        }

        return ct==n;
    }
};