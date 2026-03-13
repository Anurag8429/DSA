class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = start^goal;

        int ct = 0;
        while(ans){
            ct++;
            ans = ans & (ans-1);
        }

        return ct;
    }
};