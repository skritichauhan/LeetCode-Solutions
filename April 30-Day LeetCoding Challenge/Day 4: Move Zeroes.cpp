class Solution {
public:
    void moveZeroes(vector<int>& arr)
    {
        int pos=0;
        for(int i=0;i<arr.size();i++)
        {   
            if(arr[i]!=0)
                
            {   int temp;
                temp=arr[i];
                arr[i]=0;
                arr[pos++]=temp;
               
           }          
        }
        for(int i=pos;i<arr.size();i++)
            arr[pos]=0;
    }
};
