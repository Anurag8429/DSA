class Solution {
public:
    int row[4] = {0,-1,0,1};
    int col[4] = {-1,0,1,0};
    int r,c;
    bool valid(int i,int j){
        return i>=0 && i<r && j>=0 && j<c;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        r = grid.size();
        c = grid[0].size();
        queue<pair<int,int>>q;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        int time = 0;
        while(!q.empty()){
           int size = q.size();
           while(size--){
              int i=q.front().first;
              int j=q.front().second;
              q.pop();
              for(int k=0;k<4;k++){
                int x = i + row[k];
                int y = j + col[k];
                if(valid(x,y) && grid[x][y]==1){
                    q.push({x,y});
                    grid[x][y]=2;
                }
              }
           }
           time++;
        }
        
         for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }

        return time == 0 ? 0 : time-1;
    }
};