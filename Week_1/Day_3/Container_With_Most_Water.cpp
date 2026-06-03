class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int max_a = INT_MIN;
        int left = 0;
        int right = height.size()-1;
        while(left < right){
            int length = min(height[left],height[right]);
            int breadth = right - left;
            int area = length*breadth;
            max_a = max(max_a,area);
            if(height[left] > height[right]){
                right--;
            }
            else{
                left++;
            }
        }
        return max_a;
    }
};