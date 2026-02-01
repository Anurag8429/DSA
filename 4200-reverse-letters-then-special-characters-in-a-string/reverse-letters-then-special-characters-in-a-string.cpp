class Solution {
public:
    string reverseByType(string s) {
        vector<char>letters;
        vector<char>special;
        for(char ch : s){
            if(ch>='a' && ch<='z'){
                letters.push_back(ch);
            }else{
                special.push_back(ch);
            }
        }

        reverse(letters.begin(),letters.end());
        reverse(special.begin(),special.end());
        int l=0,r=0;
        string ans;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                ans.push_back(letters[l]);
                l++;
            }else{
                ans.push_back(special[r]);
                r++;
            }
        }
        return ans;
    }
};