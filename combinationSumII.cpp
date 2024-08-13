class Solution {
public:
    void backtrack(vector<int>& candidates, int target,int sum,int i,vector<vector<int>>& ans,vector<int>& arr){
         if(sum==target){
            ans.push_back(arr);
            return;
        }
        if(i==candidates.size() || sum>target) return;
        arr.push_back(candidates[i]);
        backtrack(candidates,target,sum+candidates[i],i+1,ans,arr);  
        arr.pop_back();
        while(i<candidates.size()-1 && candidates[i]==candidates[i+1]){
            i++;
        }      
        backtrack(candidates,target,sum,i+1,ans,arr);
        return;
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> arr;
        sort(candidates.begin(),candidates.end());
        backtrack(candidates,target,0,0,ans,arr);
        return ans;
    }
};