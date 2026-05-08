class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ct = 0;
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                ans=max(ans,ct);
                ct=0;
            }else{
                ct++;
            }
        }

        return max(ans,ct);
    }
};