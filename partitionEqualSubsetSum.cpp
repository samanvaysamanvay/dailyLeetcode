class Solution {
    public:
        bool canPartition(vector<int>& nums) {
            int sum=0;
            set<int> ans;
            int arr[10000];
            for(int i=0;i<nums.size();i++){
                sum=sum+nums[i];
            }
            if(sum%2!=0){
                return false;
            }
            else{
            int target=sum/2;
            ans.insert(0);
            for(int i=nums.size()-1;i>=0;i--){
                int k=0;
                for(auto j:ans){
                    arr[k]=j+nums[i];
                    k++;
                }
                while(k>0){
                    ans.insert(arr[k-1]);
                    if(ans.count(target)){
                        return true;
                    }
                    k--;
            }
                }
            
            return false;
            }
            }
    
    };