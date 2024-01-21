class Solution {
    vector<int> dp;
public:
    int solver(vector<int>& nums,int i){
        if(i>=nums.size()) return 0;
        if(dp[i]!=-1) return dp[i];

        int take=nums[i]+solver(nums,i+2);
        int not_take=solver(nums,i+1);

        return dp[i]=max(take,not_take);
    }
    int rob(vector<int>& nums) {
        dp.resize(nums.size(),-1);
        return solver(nums,0);
    }
};