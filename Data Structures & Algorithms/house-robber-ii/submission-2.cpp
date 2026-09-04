class Solution {
public:
    int helper(vector<int>& nums, int start, int end){
        if(start == end) return nums[start];

        int prev2 = nums[start];
        int prev1 = max(nums[start], nums[start + 1]);

        for(int i=start + 2; i<=end; i++){
            int curr = max(nums[i] + prev2, prev1);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];

        return max(helper(nums, 0, n-2), helper(nums, 1, n-1));
    }
};
