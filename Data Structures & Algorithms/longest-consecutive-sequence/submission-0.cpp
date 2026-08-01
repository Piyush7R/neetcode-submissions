class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        set<int> s;
        int c = 1;
        int ans = 1;
        for(int i=0; i<nums.size(); i++){
            if(s.find(nums[i]) != s.end()){ 
                nums.erase(nums.begin()+i);
                i--;
            }
            else{
                s.insert(nums[i]);
            }
        }
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] + 1 == nums[i+1]){
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
