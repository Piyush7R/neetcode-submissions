class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = INT_MAX;
        if(accumulate(nums.begin(), nums.end(), 0) < target) return 0;
        for(int i=0; i<nums.size(); i++){
            int sum = 0;
            int len = INT_MAX;
            for(int j=i; j<nums.size(); j++){
                sum += nums[j];
                if(sum >= target){
                    len = j-i+1;
                    break;
                }
            }
            ans = min(ans, len);
        }
        return ans;
    }
};