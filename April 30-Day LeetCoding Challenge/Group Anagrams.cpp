class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        if(strs.size()==0)
            return {{}};
        unordered_map<string,vector<string>>mp;
        vector<vector<string>> ans;
        for(int i=0;i<strs.size();i++)
        {
            string temp=strs[i];
            sort(temp.begin(),temp.end());
            mp[temp].push_back(strs[i]);       
        }
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            ans.push_back(it->second);
        }
        return ans;
    }
};
