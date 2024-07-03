class Solution {
public:
    int minDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<=4) return 0;
        int a1=nums[nums.size()-2]-nums[2],a2=nums[nums.size()-3]-nums[1],a3=nums[nums.size()-4]-nums[0],a4=nums[nums.size()-1]-nums[3];
        return min(min(a2,a1),min(a3,a4));
    }
};