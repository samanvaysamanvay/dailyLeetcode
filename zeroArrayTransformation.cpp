class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> counter(nums.size()+1,0);
        for(int i = 0; i < queries.size(); i++){
            counter[queries[i][0]]--;
            counter[queries[i][1]+1]++;
        }

        int count = 0;  
        for(int i = 0; i < nums.size(); i++){
            count += counter[i];

            if(nums[i] + count > 0) return false;
        }

        return true;
    }
};