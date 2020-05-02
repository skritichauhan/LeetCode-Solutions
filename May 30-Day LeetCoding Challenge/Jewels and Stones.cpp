class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_set<char>set;
        int count=0;
        for(int i=0;i<J.length();i++)
            set.insert(J[i]);
        for(int i=0;i<S.length();i++)
        {
            if(find(set.begin(),set.end(),S[i])!=set.end())
                count++;
        }
        return count;
    }
};
