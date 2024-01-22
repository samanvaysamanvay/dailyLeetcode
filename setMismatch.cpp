class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
          vector<int> count(nums.size(),-1);
          vector<int> ans(2,-1);
          for(int i=0;i<nums.size();i++){
              if(count[nums[i]-1]!=-1) ans[0]=nums[i];
              count[nums[i]-1]=nums[i];
          }
          for(int i=0;i<nums.size();i++){
              if(count[i]==-1){
                  ans[1]=i+1;
                  break;
              }
          }
          return ans;
    }
};