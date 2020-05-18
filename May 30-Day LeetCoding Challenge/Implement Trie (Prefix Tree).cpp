class TrieNode
{
    public:
    TrieNode* next[26];
    bool end;
    TrieNode(bool b=false)
    {
        memset(next,0,sizeof(next));
        end=b;
    }
};
class Trie {
public:
    /** Initialize your data structure here. */
    TrieNode* root;
    Trie()
    {
        root=new TrieNode();
    }
    
    /** Inserts a word into the trie. */
    void insert(string s) 
    {
        TrieNode *ptr=root;
        for(int i=0;i<s.size();i++)
        {
            if(ptr->next[s[i]-'a']==NULL)
                ptr->next[s[i]-'a']=new TrieNode();
            ptr=ptr->next[s[i]-'a'];
        }
        ptr->end=true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) 
    {
        TrieNode* p=find(word);
        if(p!=NULL && p->end==true)
            return true;
        return false;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix)
    {
        return find(prefix)!=NULL;
    }
    
    //find the word
    TrieNode *find(string word)
    {
        TrieNode *ptr=root;
        for(int i=0;i<word.length() && ptr!=NULL;i++)
        {
            ptr=ptr->next[word[i]-'a'];
        }
        return ptr;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
