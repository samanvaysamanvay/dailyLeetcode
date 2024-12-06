class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int sum=0,count=0;
        unordered_map<int,int> mp;
        for(int i=0;i<banned.size();i++) mp[banned[i]]=1;
        for(int i=1;i<=n;i++){
            if(mp[i]) continue;
            sum+=i;
            if(sum>maxSum) break;
            if(sum==maxSum){
                count++;
                break;
            }
            count++;
        }
        return count;
    }
};