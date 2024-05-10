class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end());
        long long ans=0;
        int n=happiness.size()-1,l=0;        
        while(l<k){
          happiness[n-l]=max(0,happiness[n-l]-l);  
          ans+=happiness[n-l];
          l++;
        }
        return ans;
    }
};