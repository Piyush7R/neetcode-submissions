class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        vector<vector<string>> ans;
        for(auto s: strs){
            vector<int> freq(26,0);
            for(auto c: s){
                freq[c - 'a']++;
            }

            string key = "";
            for(auto f: freq){
                key += "#" + to_string(f);
            }
            m[key].push_back(s);
        }
        for(auto &pair: m){
            ans.push_back(pair.second);
        }
        return ans;
    }
};
