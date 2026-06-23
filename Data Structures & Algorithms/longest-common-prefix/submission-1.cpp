class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int i = 0;
        int n = strs.size();
        while(i < strs[0].size() && i < strs[n-1].size()){
            if(strs[0][i] == strs[n-1][i]){
                i++;
            }
            else{
                break;
            }
        }
        string ans = "";
        for(int j=0; j<i; j++){
            ans += strs[0][j];
        }
        return ans;

    }
};