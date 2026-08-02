class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        int c = 1;
        int ans = 1;
        sort(nums.begin(), nums.end());

        for(int i=1; i<nums.size(); i++){
            if(nums[i] == nums[i-1]){
                continue;
            }
            else if(nums[i] == nums[i-1] + 1){
                c++;
            }
            else{
                ans = max(ans, c);
                c = 1;
            }
        }
        ans = max(ans, c);
        return ans;
    }
};
