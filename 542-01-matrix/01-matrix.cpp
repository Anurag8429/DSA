class Solution {
public:
    int row[4] = {1,-1,0,0};
    int col[4] = {0,0,1,-1};
    int r;
    int c;
    bool valid(int i,int j){
        return  (i>=0 && i<r) && (j>=0 && j<c);
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        r = mat.size();
        c = mat[0].size();

        vector<vector<int>>visited(r,vector<int>(c,0));
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                    visited[i][j]=1;
                }
            }
        }

        while(!q.empty()){
            int i = q.front().first.first;
            int j = q.front().first.second;;
            int step = q.front().second;
            q.pop();
            mat[i][j]=step;
            for(int k=0;k<4;k++){
                int new_row = i+row[k];
                int new_col = j+col[k];
                if(valid(new_row,new_col) && !visited[new_row][new_col]){
                    visited[new_row][new_col]=1;
                    q.push({{new_row,new_col},step+1});
                    
                }
            }
        }
        
        return mat;

    }
};