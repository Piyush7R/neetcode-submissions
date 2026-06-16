class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int ans;
        for(auto num: nums){
            int c = count(nums.begin(), nums.end(), num);
            if( c > n/2){
                ans = num;
            }
        }
        return ans;
    }
};