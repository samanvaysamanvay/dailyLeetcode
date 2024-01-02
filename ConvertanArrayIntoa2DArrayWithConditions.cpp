class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        while(true){
            int flag=0;
            vector<int> a;
            for(auto i:mp){
                if(i.second){
                    flag=1;
                    mp[i.first]--;
                    a.push_back(i.first);
                }
            }
            if(!flag) break;
            ans.push_back(a);
        }
        return ans;
    }
};