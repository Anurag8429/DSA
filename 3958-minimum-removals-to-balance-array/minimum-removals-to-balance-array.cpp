class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int ct = 1;
        int i=0,j=0;
        int mini = nums[0];
        int maxi = nums[0];
        while(j<n){
            mini = nums[i];
            maxi = nums[j];
            while(maxi>(long long)k*mini && i<j){
                i++;
                mini = nums[i];
            }

            ct = max(ct,j-i+1);
            j++;
        }
        return n-ct;
    }

};