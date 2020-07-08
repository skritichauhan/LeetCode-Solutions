
class Solution {
public:
    int hammingDistance(int x, int y) 
    {
        int ans=0;
        int xr=x^y;
        //count set bits
        while(xr>0)
        {
            ans=ans+(xr&1);
            xr>>=1;
        }
        return ans;
    }
};
