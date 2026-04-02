class Solution {
    int helper(vector<int>& nums, int n, int i, vector<int>& dp){
        if(i>=n) return 0;
        if(dp[i] != -1) return dp[i];
        return dp[i] = max(nums[i]+helper(nums, n, i+2, dp), helper(nums, n, i+1, dp));  
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        vector<int> dp(n, -1);
        vector<int> dp1(n, -1);
        return max(helper(nums, n, 1, dp), helper(nums, n-1, 0, dp1));
    }
};
