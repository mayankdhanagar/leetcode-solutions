class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int n = nums.size();

        if(n == 0)
            return 0;

        int maxCount = 1;

        for(int i = 0; i < n; i++) {

            int current = nums[i];
            int count = 1;

            while(true) {

                bool found = false;

                // Search for current + 1
                for(int j = 0; j < n; j++) {

                    if(nums[j] == current + 1) {
                        found = true;
                        break;
                    }
                }

                if(found) {
                    current++;
                    count++;
                }
                else {
                    break;
                }
            }

            maxCount = max(maxCount, count);
        }

        return maxCount;
    }
};