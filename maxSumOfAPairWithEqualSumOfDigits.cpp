class Solution {
    int sumOfDigits(int n) {
        int sum = 0;
        while (n) {  
            sum += n % 10;  
            n /= 10;        
        }
        return sum;
    }
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int,int> mp;
        
        sort(nums.begin(),nums.end());

        int ans = -1;

        for(int i = nums.size()-1; i >= 0; i--){
            int curSum = sumOfDigits(nums[i]);

            if(mp[curSum] != 0) ans = max(ans, nums[i] + mp[curSum]);

            else mp[curSum] = nums[i];
        }

        return ans;
    }
};