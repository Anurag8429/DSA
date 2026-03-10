class Solution {
public:
    int row[4] = {1,-1,0,0};
    int col[4] = {0,0,1,-1};
    int r;
    int c;
    bool valid(int i,int j){
        return  (i>=0 && i<r) && (j>=0 && j<c);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        r = image.size();
        c = image[0].size();

        int cc = image[sr][sc];
        queue<pair<int,int>>q;
        image[sr][sc] = color;
        q.push({sr,sc});
        while(!q.empty()){
              int x = q.front().first;
              int y = q.front().second;
              q.pop();
              for(int k=0;k<4;k++){
                int xx = x + row[k];
                int yy = y + col[k];
                if(valid(xx,yy) && image[xx][yy] == cc && image[xx][yy]!=color){
                    image[xx][yy] = color;
                    q.push({xx,yy});
                }
              }
        }

        return image;
    }
};