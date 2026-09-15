class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int n = nums.size();
        int largestElement = INT_MIN;
        for(int i = 0; i < n; i++ ){
            if(nums[i] > largestElement){
               largestElement = nums[i];
            }
        }        
        int secondLargestElement = INT_MIN;
        for(int i = n-1; i>=0; i--){
             if(nums[i] < largestElement && nums[i] > secondLargestElement){
                secondLargestElement = nums[i];
            }
        }
            if(secondLargestElement ==INT_MIN){
                return -1;
            }

        
        
            return secondLargestElement;

        
      
    }
};