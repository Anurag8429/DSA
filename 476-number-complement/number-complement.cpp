class Solution {
public:
    string decimalToBinary(int n){
        string ans="";
        while(n>0){
            ans = char((n%2)+'0') + ans;
            n/=2;
        }
        return ans;
    }

    int binaryToDecimal(string s){
        int ans = 0;

        for(char c : s){
            ans = ans*2 + (c-'0');
        }

        return ans;
    }

    int findComplement(int num) {
        string value = decimalToBinary(num);

        for(int i=0;i<value.size();i++){
            if(value[i]=='0') value[i]='1';
            else value[i]='0';
        }

        return binaryToDecimal(value);
    }
};