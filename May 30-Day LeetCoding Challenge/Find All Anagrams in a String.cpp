class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        vector<int>ans;
        if(s.length()<p.length())
            return ans;
        vector<int>hs(26,0);
        vector<int>hp(26,0);
        int left=0,right=0;
        while(right<p.length())
        {
            hs[s[right]-'a']++;
            hp[p[right]-'a']++;
            right++;
        }
        right--;
        while(right<s.length())
        {
            if(hs==hp)
                ans.push_back(left);
            right++;
            if(right!=s.length())
            {
                hs[s[left]-'a']--;
                hs[s[right]-'a']++;
                left++;
            }
        }
        return ans;
    }
};
