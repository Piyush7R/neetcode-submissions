class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int ans = 0;
        for(auto num: s){
            if(s.find(num - 1) != s.end()){
                continue;
            }
            else{
                int count = 1;
                while(s.find(num + 1) != s.end()){
                    count++;
                    num++;
                }
                ans = max(ans, count);
            }
        }
        return ans;
    }
};
