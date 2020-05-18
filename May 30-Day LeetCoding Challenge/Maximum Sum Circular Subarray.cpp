class Solution {
public:
    int maxSubarraySumCircular(vector<int>& arr) {
        if(arr.empty())
            return 0;
        
        int total = arr[0];
        int min_sum = arr[0], max_sum = arr[0];
        int curr_max = arr[0], curr_min = arr[0];
        
        for(int i = 1; i < arr.size(); i++) {
            curr_max += arr[i];
            curr_max = max(curr_max, arr[i]);
            curr_min += arr[i];
            curr_min = min(curr_min, arr[i]);
            max_sum = max(max_sum, curr_max);
            min_sum = min(min_sum, curr_min);
            
            total += arr[i];
        }
        int circular_sum = total - min_sum;
        return max_sum > circular_sum ? max_sum : circular_sum == 0 ? max_sum : circular_sum;
    }
};
