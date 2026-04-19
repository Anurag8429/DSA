class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int maxi = 100000;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int j = i+1,k=n-1;
            while(j<k){
                long long sum = (long long) nums[i]+nums[j]+nums[k];
                if(abs(target-sum)<abs(target-maxi)){
                    maxi = sum;
                }else if(sum<target){
                    j++;
                }else{
                    k--;
                }
                
            }

        }

        return maxi;
    }
};