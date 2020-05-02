class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1;
        //check for index where nums[i]<nums[i+1] is not satisfied
        while(low<high)
        {
            int mid=(low+high)/2;
            if(nums[mid]<nums[high])
                high=mid;
            else
                low=mid+1;
        }
        int rot=low;
        low=0,high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int realmid=(mid+rot)%n;
            if(nums[realmid]==target)
                return realmid;
            if(nums[realmid]<target)
                low=mid+1;
            else
                high=mid-1;
        }
        return -1;
    }
};
