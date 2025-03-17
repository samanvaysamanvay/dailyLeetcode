class Solution {
    public:
        bool divideArray(vector<int>& nums) {
            int count,flag=0;
            for(int i=0;i<nums.size();i++){
                   count=0;
                for(int j=0;j<nums.size();j++){
                    if(nums[i]==nums[j])
                        count++;
                }
                if(count%2!=0){
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                return false;
            else 
                return true;
        }
    };