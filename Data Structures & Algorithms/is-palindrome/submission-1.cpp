class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> str;
        for(int i=0; i<s.size(); i++){
            s[i] = tolower(s[i]);
            if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9'){
                str.push_back(s[i]);
            }
        }
        int n = str.size();
        for(int i=0; i<n; i++){
            if(str[i] != str[n-i-1]){
                return false;
            }
        }
        return true;
    }
};
