class Solution {
public:
    void fill(vector<vector<int>>& image, int sr, int sc, int newColor, int orig)
    {
        image[sr][sc]=newColor;
        vector<vector<int>>dir={{0,-1},{-1,0},{0,1},{1,0}};
        for(int i=0;i<4;i++)
        {
            int row=sr+dir[i][0];
            int col=sc+dir[i][1];
            if(row<0 || col<0 || row>=image.size()||col>=image[0].size() || image[row][col]!=orig)
                continue;
            image[row][col]=newColor;
            fill(image,row,col,newColor,orig);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    {
        int orig=image[sr][sc];
        if(orig!=newColor)
            fill(image,sr,sc,newColor,orig);
        return image;
        
    }
};
