class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {
        int window=s1.length();
        if(s2.length()<window)
            return false;
        vector<int>hash(26,0),hashw(26,0);
        for(int i=0;i<s1.length();i++)
            hash[s1[i]-'a']++;
        int left=0,right=0;
        while(right<s2.length())
        {
            hashw[s2[right]-'a']++;
            if(window==right-left+1)
            {
                if(hash==hashw)
                    return true;
                hashw[s2[left]-'a']--;
                left++;
            }
                right++;
        }
        return false;
    }
};
