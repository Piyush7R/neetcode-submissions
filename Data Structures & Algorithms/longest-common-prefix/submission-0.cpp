class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int index = 0;
        for(int i=0; i<strs[0].size(); i++){
            char ch= strs[0][i];
            int j=0;
            int flag = 0;
            while(j != strs.size()){
                if(strs[j][i] == ch){
                    flag++;
                }
                j++;
            }
            if(flag == strs.size()){
                ans += ch;
            }
            else{
                return ans;
            }
        }
        return ans;
    }
};