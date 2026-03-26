class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xor_r = 0;
        for(int x : nums){
            xor_r^=x;
        }

        int mask = xor_r & (-xor_r);
        int a = 0;
        int b = 0;
        for(int x : nums){
            if(x & mask){
                a^=x;
            }else{
                b^=x;
            }
        }

        return {a,b};
    }
};