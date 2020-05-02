// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
int func(int high,int low)
{
    int mid;
    while(low<high)
    {
        mid=low+(high-low)/2;
        if(isBadVersion(mid))
            high=mid;
        else
            low=mid+1;          
    }
    return low;
}
class Solution {
public:
    int firstBadVersion(int n) {
        return func(n,1);
    }
};
