class Solution {
public:
    int findMaxLength(vector<int>& nums) 
    {
        unordered_map<int,int>mp;
        int count=0,maxm=0;
        mp[0]=-1;
        for(int i=0;i<nums.size();i++)
        {
            count=count+(nums[i]==0?-1:1);
            if(mp.find(count)!=mp.end())
                maxm=max(maxm,i-mp[count]);
            else
                mp.insert(pair<int,int>(count,i));
        }
       return maxm;
    }
};
