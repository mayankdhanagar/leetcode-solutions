class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
       int left = 0;
       int right = n-1;
       int leftMax = 0;
       int rightMax = 0;
       int maxWater = 0;
       while(left < right){
        if(height[left] < height[right]){
            leftMax = max(leftMax , height[left]);
            maxWater += max(leftMax,rightMax)-height[left];
            left++;
        }
        else{
            rightMax = max(rightMax , height[right]);
            maxWater += max(rightMax ,leftMax)-height[right];
            right--;
        }
       }
       return maxWater;
    }
};