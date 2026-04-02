class Solution {
    int helper(vector<int>& nums, int tar, int n, int i, int sum){
        if(i==n){
            if(sum == tar) return 1;
            else return 0;
        }
        return (helper(nums,tar,n,i+1,sum+nums[i])+helper(nums,tar,n,i+1,sum-nums[i]));
    }
public:
    int findTargetSumWays(vector<int>& nums, int tar) {
        int n = nums.size();

        return helper(nums, tar, n, 0, 0);
    }
};
