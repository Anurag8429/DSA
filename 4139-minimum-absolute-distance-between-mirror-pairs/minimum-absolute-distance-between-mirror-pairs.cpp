class Solution {
public:
    int reverseNum(int num){
        int ans = 0;
        while(num>0){
            int rem = num%10;
            ans = ans*10 + rem;
            num/=10;
        }
        return ans;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        int ans = INT_MAX;
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
           if(mp.count(nums[i])){
            ans = min(ans,i-mp[nums[i]]);
           }

           int rev = reverseNum(nums[i]);
           mp[rev]=i;
        }
        return (ans == INT_MAX) ? -1 : ans;
        
    }
};