class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int sub=1;
        while(k>0){
            for(auto i:mp){
                if(i.second==sub){
                    mp[i.first]-=min(k,sub);
                    k-=min(k,sub);
                }
                if(k==0) break;
            }
            sub++;
        }
        int ans=0;
        for(auto i:mp){
            if(i.second>0) ans++;
        }
        return ans;
    }
};