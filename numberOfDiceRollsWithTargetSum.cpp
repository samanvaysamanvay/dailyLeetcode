class Solution {
public:
    vector<vector<int>> dp;
    const int mod=(int)pow(10,9)+7;
    int chances(int n, int k, int target) {
        if (n == 0 && target == 0) return 1;
        if (n == 0 || target <= 0) return 0;
        
        if (dp[n][target] != -1) return dp[n][target]%mod; 
        int count = 0;
        for (int i = 1; i <= k; i++) {
            count = (count + chances(n - 1, k, target - i))%mod;
        }
        dp[n][target] = count%mod;
        return dp[n][target];
    }

    int numRollsToTarget(int n, int k, int target) {
        dp.resize(n + 1, vector<int>(target + 1, -1));
        if (target > n * k) return 0;
        return chances(n, k, target);
    }
};
