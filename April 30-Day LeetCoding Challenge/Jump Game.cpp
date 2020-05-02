class Solution {
public:
    
    /* dynamic programming only recursion
    bool dyn(vector<int>nums, int idx)
    {
        if(idx==nums.size()-1)
            return true;
        if(idx>=nums.size())
            return false;
        bool val=false;
        for(int i=1;i<=nums[idx];i++)
        {   
            val=val||dyn(nums,idx+i);
        }
        return val;
    }*/
    bool canJump(vector<int>& nums) {
        int reach=0,i=0,n=nums.size();
        for(;i<n && i<=reach;i++)
        {
            reach=max(nums[i]+i,reach);
        }
        return i==n;
    }
};
