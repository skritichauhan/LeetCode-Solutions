class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>prevSum;
        int currSum=0,res=0;
        for(int i=0;i<nums.size();i++)
        {
            currSum+=nums[i];
            if(currSum==k)
                res++;
            if(prevSum.find(currSum-k)!=prevSum.end())
                res+=prevSum[currSum-k];
            prevSum[currSum]++;
        }
        return res;
    }
};
