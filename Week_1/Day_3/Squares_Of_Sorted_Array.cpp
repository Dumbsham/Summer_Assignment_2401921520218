class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        int l = 0;
        int r = nums.size()-1;

        for(int i = r;i >= 0;i--){
            int a = nums[l];
            int b = nums[r];
            if(a < 0)-1*a;
            if(b < 0)-1*b;

            if(a > b){
                ans[i] = a*a;
                l++;
            }
            else{
                ans[i] = b*b;
                r--;
            }
        }
        return ans;
    }
};