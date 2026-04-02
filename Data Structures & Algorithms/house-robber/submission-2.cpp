class Solution {
    int helper(vector<int>& nums, int n, int i, vector<int>& dp){
        if(i>=n) return 0;
        if(dp[i] != -1) return dp[i];
        return dp[i] = max(nums[i]+helper(nums, n, i+2, dp), helper(nums, n, i+1, dp));  
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return helper(nums, n, 0, dp);
    }
};
