class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<long long> nums(n,0);
        for(int i=0;i<roads.size();i++){
            nums[roads[i][0]]++;
            nums[roads[i][1]]++;
        }
        long long ans=0;
        sort(nums.begin(),nums.end(),greater<int>());
        for(int i=0;i<nums.size();i++){
            ans+=nums[i]*n;
            n--;
        }
        return ans;
    }
};