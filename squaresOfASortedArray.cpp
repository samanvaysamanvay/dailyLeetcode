class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int pointer=nums.size()-1;
        for(int i=0;i<nums.size();i++){ 
            if(nums[i]>=0){
                pointer=i;
                break;
            }
        }
        vector<int> ans;
        int l=pointer-1,r=pointer;
        while(l>=0 || r<nums.size()){
             if(l<0){
                ans.push_back(nums[r]*nums[r]);
                r++;
             }
             else if(r>=nums.size()){
                 ans.push_back(nums[l]*nums[l]);
                 l--;
             }
             else if(abs(nums[l])<=nums[r]){
              ans.push_back(nums[l]*nums[l]);
              l--;
             }
             else{
              ans.push_back(nums[r]*nums[r]);
              r++;
             }
        }
        return ans; 
    }
};