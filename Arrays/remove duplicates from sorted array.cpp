class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int write = 0;
        int n = nums.size();

        for(int read = 0; read < n; read++) {
            if(nums[read] != 0) {
                nums[write] = nums[read];
                write++;
            }
        }

        for(int i = write; i < n; i++) {
            nums[i] = 0;
        }
    }
};