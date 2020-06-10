class Solution {
public:
    string frequencySort(string s) 
    {
        unordered_map<char,int>mp;
        string res="";
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        vector<string>bucket(s.size()+1,"");
        for(auto &it:mp)
        {
            int n=it.second;
            char c=it.first;
            bucket[n].append(n,c);
        }
        for(int i=s.size();i>0;i--)
        {
            if(!bucket[i].empty())
                res.append(bucket[i]);
        }
        return res;
    }
};
