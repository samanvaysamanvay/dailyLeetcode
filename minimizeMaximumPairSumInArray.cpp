class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int left=0,right=nums.size()-1,maxsum=nums[left]+nums[right];
        while(left<right){
            if(nums[left]+nums[right]>maxsum) maxsum=nums[left]+nums[right];
            left++;
            right--;
        }
        return maxsum;
    }
};