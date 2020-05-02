class Solution {
public:
    priority_queue<int,vector<int>>pq;
    int lastStoneWeight(vector<int>& stones) 
    {
        for(int i=0;i<stones.size();i++)
            pq.push(stones[i]);
        while(pq.size()>1)
        {
            int max=pq.top();
            pq.pop();
            int nxt=pq.top();
            pq.pop();
            pq.push(max-nxt);
        }
        if(pq.size()==1)
            return pq.top();
        else
            return 0;
    }
};
