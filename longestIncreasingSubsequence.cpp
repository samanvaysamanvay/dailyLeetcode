class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int dp[nums.size()];
        for(int i=nums.size()-1;i>=0;i--){
            dp[i]=1;
            for(int j=i;j<nums.size();j++){
                if(nums[j]>nums[i] && dp[i]<1+dp[j]){
                    dp[i]=1+dp[j];
                }
            }
        }
        return *max_element(dp,dp+nums.size());
    }
};