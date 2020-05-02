class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_max=nums[0],gl_max=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            curr_max=max(nums[i],curr_max+nums[i]);
            gl_max=max(curr_max,gl_max);
        }
        return gl_max;
    }
};
