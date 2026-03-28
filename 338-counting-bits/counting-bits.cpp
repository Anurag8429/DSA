class Solution {
public:
   int bit(int n){
    int ct=0;
    while(n){
        n=n&(n-1);
        ct++;
    }
    return ct;
   }
    vector<int> countBits(int n) {
        vector<int>ans;
        ans.push_back(0);
        if(n==0){
            return ans;
        }
        ans.push_back(1);

        for(int i=2;i<=n;i++){
            ans.push_back(bit(i));
        }

        return ans;
    }
};