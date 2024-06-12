class Solution {
public:
    void sortColors(vector<int>& nums) {
         vector<int> count(3,0);
         for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
         }
         int k=0;
         for(int i=0;i<3;i++){
            for(int j=k;j<k+count[i];j++){
                nums[j]=i;
            }
            k+=count[i];
         }
    }
};