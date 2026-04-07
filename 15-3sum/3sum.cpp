class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        if(n==3){
            if(nums[0]+nums[1]+nums[2]==0){
                return {{nums[0],nums[1],nums[2]}};
            }else{
                return {};
            }
        }

        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){

            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int target = -nums[i];
            int j=i+1;
            int k=n-1;

            while(j<k){
                int sum = nums[j]+nums[k];
                if(sum<target){
                    j++;
                }else if(sum>target){
                    k--;
                }else{
                    while(j<k && nums[j]==nums[j+1]){
                        j++;
                    }

                    while(j<k && nums[k]==nums[k-1]){
                        k--;
                    }

                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
            }

        }

        return ans;
    }
};