class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        int count = 0;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] != nums[j]){
                swap(nums[i],nums[j+1]);
                j = j+1;
                count++;
            }
        }
        return count+1;
    }
};