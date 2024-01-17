class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        vector<int> ans(1001,-2000);
        for(auto i:mp){
            if(ans[i.second]!=-2000) return false;
            ans[i.second]=i.first;
        }
        return true;
    }
};