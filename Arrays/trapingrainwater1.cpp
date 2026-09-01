class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int>prefixMax(n);
        vector<int>suffixMax(n);
        int maxWater = 0;
        
             prefixMax[0]= height[0];
             for(int i = 1 ; i < n ; i++ ){
                prefixMax[i] = max(prefixMax[i-1] , height[i]);
             }
                suffixMax[n-1] = height[n-1];
                for(int j = n-2 ; j >= 0 ;j-- ){
                    suffixMax[j] = max(suffixMax[j+1] , height[j]);
                }
         for(int i = 0 ; i < n ; i++ ){
          maxWater += max(0,min(prefixMax[i] , suffixMax[i])-height[i]);
         }
        return maxWater;
    }
};