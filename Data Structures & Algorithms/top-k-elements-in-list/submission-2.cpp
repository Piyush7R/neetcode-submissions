class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int, int>> freq;
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int c = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] == nums[i-1]) c++;
            else{
                freq.push_back({c, nums[i-1]});
                c=1;
            }
        }
        freq.push_back({c, nums.back()});

        sort(freq.begin(), freq.end());

        int i=freq.size()-1;
        while(k-- && i>=0){
            ans.push_back(freq[i].second);
            i--;
        }
        return ans;
        
    }
};
