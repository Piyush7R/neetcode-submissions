class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> m;
        int n = nums.size();
        vector<int> ans;
        for(auto n: nums){
            m[n]++;
        }
        
        for(auto pair: m){
            if(pair.second > n/3){
                ans.push_back(pair.first);
            }
        }
        return ans;
    }
};