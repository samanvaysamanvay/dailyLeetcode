class Solution {
public:
    int mod=1e9+7;
    long nCr(int n, int r) {
      if (r > n - r) r = n - r;
        long ans = 1;
        int i;
        for (i = 1; i <= r; i++) {
            ans *= n - r + i;
            ans /= i;
            }
      return ans;
    }
    int countNicePairs(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            string a=to_string(nums[i]);
            reverse(a.begin(),a.end());
            nums[i]=nums[i]-stoi(a);    
        }
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int count=0;
        for(const auto i:mp){
            if(i.second>1){
                count+=(nCr(i.second,2)%mod);
                count=count%mod;
            }
        }
        return count;
    }
};