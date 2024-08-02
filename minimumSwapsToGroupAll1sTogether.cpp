class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int count1=0,count0=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1) count1++;
            nums.push_back(nums[i]);
        }
        int left=0,right=count1-1,minswaps=INT_MAX,curswap=0;
        for(int i=left;i<=right;i++){
            if(nums[i]==0) curswap++;
        }
        minswaps=min(minswaps,curswap);
        while(right<n+count1-1){
            if(nums[left]==0) curswap--;
            if(nums[right+1]==0) curswap++;
            left++;
            right++;
            minswaps=min(minswaps,curswap);
        }
        return minswaps;
    }
};