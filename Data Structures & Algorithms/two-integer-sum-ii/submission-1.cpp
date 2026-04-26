class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int r = 0;
        int l = numbers.size()-1;
        while(r < l){
            int sum = numbers[r] + numbers[l];
            if(sum == target){
                return {r+1, l+1};
            }
            else if(sum < target) r++;
            else l--;
        }
    }
};
