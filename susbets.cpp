class Solution {
public: void backtrack(int i,vector<int> nums,vector<int> arr,vector<vector<int>>& ans){
    if(i==nums.size()) return;
    (backtrack(i+1,nums,arr,ans));
    arr.push_back(nums[i]);
    (backtrack(i+1,nums,arr,ans));
    ans.push_back(arr);
    return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
          vector<vector<int>> ans;
          ans.push_back({});
          vector<int> arr;
          backtrack(0,nums,arr,ans);
          return ans;
    }
};