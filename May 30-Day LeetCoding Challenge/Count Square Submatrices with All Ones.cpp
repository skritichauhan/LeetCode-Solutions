class Solution {
public:
    int countSquares(vector<vector<int>>& t) 
    {
        int m=t.size();
        int n=t[0].size();
        int ans=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(t[i][j]>0 && i>0 && j>0)
                    t[i][j]=min(min(t[i-1][j],t[i][j-1]),t[i-1][j-1])+1;
                ans+=t[i][j];
            }
            
        }
        return ans;
    }
};
