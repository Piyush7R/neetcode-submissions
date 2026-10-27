class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int len = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            int sum = 0;
            for(int j=i; j<nums.size(); j++){
                sum += nums[j];
                if(sum >= target){
                    len = min(len, j-i+1);
                    break;
                }
            }
        }
        return (len == INT_MAX) ? 0 : len;
    }
};