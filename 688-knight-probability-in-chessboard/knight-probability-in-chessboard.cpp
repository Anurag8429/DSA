class Solution {
public:
    int row[8]={2,2,-2,-2,-1,1,-1,1};
    int col[8]={-1,1,-1,1,2,2,-2,-2};
    int N;
    double solve(vector<vector<vector<double>>>&dp,int r,int c,int k){
        if(r<0 || r>=N || c<0 || c>=N){
            return 0.0;
        }

        if(k==0){
            return 1.0;
        }

        if(dp[r][c][k]!=-1){
            return dp[r][c][k];
        }
        double ans = 0;
        for(int i=0;i<8;i++){
            int x = r + row[i];
            int y = c + col[i];
            ans += solve(dp,x,y,k-1);
        }

        return dp[r][c][k] =  ans/8.0;
    }
    double knightProbability(int n, int k, int row, int column) {
        N = n;
        vector<vector<vector<double>>>dp(N,vector<vector<double>>(N,vector<double>(k+1,-1.0)));
        return solve(dp,row,column,k);
    }
};