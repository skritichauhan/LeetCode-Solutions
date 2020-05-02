class Solution {
public:
    int sumDigit(int n){
    int sum = 0, tmp;
        while (n) {
            tmp = n % 10;
            sum += tmp * tmp;
            n /= 10;
        }
        return sum;
    }
    
    bool isHappy(int n) 
    {
   
        int slow,fast;
        slow=fast=n;
        do
        {
            slow=sumDigit(slow);
            fast=sumDigit(fast);
            fast=sumDigit(fast);
            if(fast==1)
                return true;        
        }
        while(slow!=fast);
        return false;
    }
        
    
};
