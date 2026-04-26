class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        int zeros = 0;
        int pos = 0;
        int prod = 1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                zeros++;
                pos = i;
            }
            else{
                prod *= nums[i];
            }
        }
        if(zeros == 0){
            for(int i=0; i<nums.size(); i++){
                ans[i] = prod / nums[i];
            }
        }
        else if(zeros == 1){
            ans[pos] = prod;
            return ans;
        }
        return ans;
    }
};
