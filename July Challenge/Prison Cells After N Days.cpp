class Solution {
public:
    vector<int>nextDay(vector<int>arr)
    {
        vector<int>temp(arr.size());
        for(int i=1;i<7;i++)
        {
            if(arr[i-1]==arr[i+1])
                temp[i]=1;
            else
                temp[i]=0;
        }
        return temp;
    }
    vector<int> prisonAfterNDays(vector<int>& cells, int N) 
    {
        if(cells.size()==0 || N==0)
            return cells;
        vector<int>next;
        for(int i=(N-1)%14+1;i>0;i--)
        {
            next=nextDay(cells);
            cells=next;
        }
        return cells;
    }
};
