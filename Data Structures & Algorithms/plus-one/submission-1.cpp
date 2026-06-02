class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        long long num = 0;
        vector<int> ans;
        for(int i=0; i<digits.size(); i++){
            num = num * 10 + digits[i];
        }
        num++;
        while(num > 0){
            int dig = num%10;
            ans.push_back(dig);
            num /= 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

