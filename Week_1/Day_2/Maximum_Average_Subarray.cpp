class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg = 0;
        for(int i = 0;i < k;i++){
            avg+=nums[i];
        }
        
        double max_a = avg;
        for(int i = k;i < nums.size();i++){
            avg = avg - nums[i-k] + nums[i];
            max_a = max(avg,max_a);
        }
        max_a = max_a /k;
        return max_a;
    }
};