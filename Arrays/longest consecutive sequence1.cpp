class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int n = nums.size();
       int count = 1;
       int maxCount =1;
       if(n == 0){
        return 0;

       }
        for(int i =1;i<nums.size();i++){
            if(nums[i] == nums[i-1]){
                continue;
            }
            else if(nums[i] == nums[i-1]+1){
             count++;
            } 
            else count =1;
            maxCount =max(maxCount,count);
        }
       return maxCount;
    }
};