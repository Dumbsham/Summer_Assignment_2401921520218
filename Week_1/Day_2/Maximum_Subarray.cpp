class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int right = 0;
        int sum = 0;
        int maxum = INT_MIN;
        for(right = 0;right < nums.size();right++){
            sum += nums[right];
            maxum = max(maxum,sum);
            if(sum < 0){
                sum = 0;
              
            }
            
        }
        return maxum;
    }
};