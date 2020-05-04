class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.length()==0)
            return true;
        if(magazine.length()==0)
            return false;
        unordered_map<char,int>mp;
        for(int i=0;i<magazine.length();i++)
        {
            mp[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.length();i++)
        {
            if(mp.find(ransomNote[i])==mp.end())
                return false;
            else
                mp[ransomNote[i]]--;
            if(mp[ransomNote[i]]<0)
                return false;
        }
        return true;
    }
};
