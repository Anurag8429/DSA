class Solution {
public:
    int num(char ch){
        if(ch=='I'){
            return 1;
        }else if(ch=='V'){
            return 5;
        }else if(ch=='X'){
            return 10;
        }else if(ch=='L'){
            return 50;
        }else if(ch=='C'){
            return 100;
        }else if(ch=='D'){
            return 500;
        }else{
            return 1000;
        }
    }
    int romanToInt(string s) {
        int i=0,sum=0;
        while(i<s.size()-1){
            if(num(s[i])<num(s[i+1])){
                sum-=num(s[i]);
            }else{
                sum+=num(s[i]);
            }
            i++;
        }
        sum+=num(s[i]);
        return sum;
    }
};