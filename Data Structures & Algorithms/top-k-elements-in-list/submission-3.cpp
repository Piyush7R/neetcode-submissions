class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int, int> m;
        vector<vector<int>> bucket(nums.size() + 1);
        for(auto n: nums){
            m[n]++;
        }
        for(auto pair: m){
            int number = pair.first;
            int count = pair.second;
            bucket[count].push_back(number);
        }
        for(int i=bucket.size()-1; i>=0 && ans.size() < k; i--){
            for(auto num: bucket[i]){
                ans.push_back(num);
                if(ans.size() == k){
                    break;
                }
            }
        }
        return ans;
        
    }
};
