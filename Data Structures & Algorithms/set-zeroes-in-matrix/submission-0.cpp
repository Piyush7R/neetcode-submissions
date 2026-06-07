class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> r;
        vector<int> c;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j] == 0){
                    r.push_back(i);
                    c.push_back(j);
                }
            }
        }
        for(auto val: r){
            for(int j=0; j<n; j++){
                matrix[val][j] = 0;
            }
        }
        for(auto val: c){
            for(int j=0; j<m; j++){
                matrix[j][val] = 0;
            }
        }
    }
};
