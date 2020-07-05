class Solution {
public:
    int nthUglyNumber(int n) 
    {
        if(n<=0)
            return 0;
        if(n==1)
            return 1;
        int i2=0,i3=0,i5=0;
        vector<int>ans(n);
        ans[0]=1;
        for(int i=1;i<n;i++)
        {
            int twoMultiple=ans[i2]*2;
            int threeMultiple=ans[i3]*3;
            int fiveMultiple=ans[i5]*5;
            ans[i]=min(twoMultiple,min(threeMultiple,fiveMultiple));
            if(ans[i]==twoMultiple)
                i2++;
            if(ans[i]==threeMultiple)
                i3++;
            if(ans[i]==fiveMultiple)
                i5++;
         
        }
        return ans[n-1];
        
    }
};
