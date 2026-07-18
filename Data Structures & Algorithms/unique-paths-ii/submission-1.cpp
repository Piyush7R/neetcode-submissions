class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        vector<vector<int>> dp(n, vector<int>(m,0) );

        if(obstacleGrid[0][0] == 1) return 0;
        dp[0][0] = 1;

        int count = 0;
        for(int i=1; i<m; i++){
            if(obstacleGrid[0][i] == 0 && count == 0){
                dp[0][i] = 1;
            }
            else{
                dp[0][i] = 0;
                count++;
            }
        }

        count = 0;
        for(int i=1; i<n; i++){
            if(obstacleGrid[i][0] == 0 && count == 0){
                dp[i][0] = 1;
            }
            else{
                dp[i][0] = 0;
                count++;
            }
        }

        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(obstacleGrid[i][j] != 1)
                    dp[i][j] = dp[i][j-1] + dp[i-1][j];
            }
        }

        return dp[n-1][m-1];
        
    }
};