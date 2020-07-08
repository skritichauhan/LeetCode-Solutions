class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int count=0,neigh=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    count++;
                    if(i>0 && grid[i-1][j]==1)//up neighbour
                        neigh++;
                    if(j<grid[0].size()-1 && grid[i][j+1]==1)//right neighbour
                        neigh++;
                }
            }
        }
        return count*4-neigh*2;
    }
};
