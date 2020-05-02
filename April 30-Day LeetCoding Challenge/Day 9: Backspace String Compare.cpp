class Solution {
public:
    bool backspaceCompare(string S, string T) 
    {
        string ns="";
        string nt="";
        for(int i=0;i<S.length();i++)
        {
            if(S[i]!='#')
                ns.push_back(S[i]);
            else if(!ns.empty())
                ns.pop_back();
        }
         for(int i=0;i<T.length();i++)
        {
            if(T[i]!='#')
                nt.push_back(T[i]);
             else if(!nt.empty())
                nt.pop_back();
        }
       return ns==nt;
        
    }
};
