class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]!=nums[i]) size++;
        }
        int i=nums.size()-1,ans=0;
        while(i>0){
            int count=1;
            if(nums[i]==nums[0]) break;
            while(nums[i-1]==nums[i]){
                count++;
                i--;
            }
            i--;
            size--;
            ans=ans+(count*size);
        }
        return ans;
    }
};