class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum =0;
        int ansStart = -1;
        int ansEnd = -1;
        int start =0;

        int ans = INT_MIN;
        for(int i = 0; i< nums.size(); i++){
            if(sum == 0)
             start = i;
            sum += nums[i];
            if(sum > ans){
                ans = sum;
                ansStart = start;
                ansEnd = i;
            }
            if(sum < 0){
                sum = 0;
            }
        }
        return ans;
    }
};