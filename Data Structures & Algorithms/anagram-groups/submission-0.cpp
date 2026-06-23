class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> g;
        vector<vector<string>> ans;
        for(auto st: strs){
            string temp = st;
            sort(temp.begin(), temp.end());
            g[temp].push_back(st);
        }
        for(auto pair: g){
            ans.push_back(pair.second);
        }
        return ans;
    }
};
