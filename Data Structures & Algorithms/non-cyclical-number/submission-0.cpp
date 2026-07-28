class Solution {
public:
    int square(int n){
        int sum = 0;
        while(n > 0){
            sum += pow(n%10,2);
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        set<int> s;
        int sum = square(n);
        while(sum != 1 && s.find(sum) == s.end()){
            s.insert(sum);
            sum = square(sum);
        }
        return sum==1? true : false;
        
    }
};
