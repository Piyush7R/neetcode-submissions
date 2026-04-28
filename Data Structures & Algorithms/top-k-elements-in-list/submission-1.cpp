class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }

        priority_queue<pair<int, int>> maxHeap;
        for(auto pair: m){
            maxHeap.push({pair.second, pair.first});
        }

        vector<int> ans;
        while(k-- && !maxHeap.empty()){
            ans.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return ans;
        
    }
};
