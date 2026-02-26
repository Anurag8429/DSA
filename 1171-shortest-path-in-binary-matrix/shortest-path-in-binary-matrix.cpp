class Solution {
public:
    int row[8]={-1,-1,-1,1,1,1,0,0};
    int col[8]={-1,0,1,-1,0,1,-1,1};
    int n;

    bool valid(int i,int j){
        return (i>=0 && i<n) && (j>=0 && j<n);
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        n = grid.size();
        if(grid[0][0]!=0 || grid[n-1][n-1]!=0){
            return -1;
        }

        if(n==1 && grid[0][0]==0){
            return 1;
        }

        queue<pair<int,int>>q;
        q.push({0,0});
        int ans = 0;
         while(!q.empty()){
            int size = q.size();
            ans++;
            while(size--){
                int i = q.front().first;
                int j = q.front().second;
                q.pop();
                for(int k=0;k<8;k++){
                    int new_i = i + row[k];
                    int new_j = j + col[k];
                    if(valid(new_i,new_j) && grid[new_i][new_j]==0){
                        grid[new_i][new_j]=1;
                        if(new_i == n-1 && new_j == n-1){
                            return ans+1;
                        }

                        q.push({new_i,new_j});
                    }
                }
            }

        }

        return -1;
    }
};