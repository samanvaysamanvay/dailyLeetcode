class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans=0;
        for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        for(auto i:mp){
            if(i.second<2) return -1;
            int j=i.second%3;
            switch(j){
                case 0:ans+=(i.second/3);
                       break;
                case 1:ans+=(i.second/3)+1;
                       break;
                case 2:ans+=(i.second/3)+1;
                       break;                   
            }
        }
        return ans;
    }
};