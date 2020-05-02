class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int rows=matrix.size(),cols;
        if(rows>0)
            cols=matrix[0].size();
        else
            cols=0;
        int dp[rows+1][cols+1];
        memset(dp,0,sizeof(dp));
        int maxm=0;
        for(int i=1;i<=rows;i++)
        {
            for(int j=1;j<=cols;j++)
            {
                if(matrix[i-1][j-1]=='1')
                {
                     dp[i][j] = 1 + min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1]));
                    maxm=max(dp[i][j],maxm);
                }
            }
        }
        return maxm*maxm;
    }
};
