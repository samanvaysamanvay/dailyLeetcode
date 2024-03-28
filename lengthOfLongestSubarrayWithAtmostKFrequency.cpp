class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int left=0,right=0,maxlength=INT_MIN;
        unordered_map<int,int> mp;
        while(right<nums.size()){
            mp[nums[right]]++;
            while(right<nums.size() && mp[nums[right]]<=k){
                right++;
                if(right<nums.size()) mp[nums[right]]++; 
            }
            maxlength=max(maxlength,right-left);
            while(right<nums.size() && left<right && mp[nums[right]]>k){
                mp[nums[left]]--;
                left++;
            }
            right++;
        }
        return maxlength;
    }
};