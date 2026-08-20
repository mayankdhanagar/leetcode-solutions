class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        set<vector<int>> unique;

        for(int i = 0; i < nums.size(); i++) {

            unordered_set<int> st;

            for(int j = i + 1; j < nums.size(); j++) {

                int third = -(nums[i] + nums[j]);

                if(st.find(third) != st.end()) {

                    vector<int> temp = {
                        nums[i],
                        nums[j],
                        third
                    };

                    sort(temp.begin(), temp.end());

                    unique.insert(temp);
                }

                st.insert(nums[j]);
            }
        }

        vector<vector<int>> ans(unique.begin(), unique.end());

        return ans;
    }
};