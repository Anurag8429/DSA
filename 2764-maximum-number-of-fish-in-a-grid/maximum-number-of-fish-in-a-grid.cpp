class Solution {
public:
    int row[4] = {1,-1,0,0};
    int col[4] = {0,0,1,-1};
    int r;
    int c;
    bool valid(int i,int j){
        return  (i>=0 && i<r) && (j>=0 && j<c);
    }
    int findMaxFish(vector<vector<int>>& grid) {
        r = grid.size();
        c = grid[0].size();

        int ans = 0;
        int ct = 0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]>0){
                    ct+=grid[i][j];
                    grid[i][j]=0;
                    queue<pair<int,int>>q;
                    q.push({i,j});
                    while(!q.empty()){
                        int x  = q.front().first;
                        int y = q.front().second;
                        q.pop();
                        for(int k=0;k<4;k++){
                            int xx = x + row[k];
                            int yy = y + col[k];
                            if(valid(xx,yy) && grid[xx][yy]>0){
                                ct+=grid[xx][yy];
                                grid[xx][yy]=0;
                                q.push({xx,yy});
                            }
                        }
                    }
                    ans = max(ans,ct);
                    ct = 0;
                }
            }
        }

        return ans;

    }
};