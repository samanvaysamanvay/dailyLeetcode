class Solution {
public:
int findSmallest(int a, int b, int c) {
    if (a <= b && a <= c) {
        return a;
    } else if (b <= a && b <= c) {
        return b;
    } else {
        return c;
    }
}
    int maximumScore(vector<int>& nums, int k) {
        int maxscore=INT_MIN;
        int min=nums[k];
        int l=k,r=k;
        while(l>=0 && r<nums.size()){  
            min=findSmallest(min,nums[l],nums[r]);   
            if(maxscore<min*(r-l+1)) maxscore=min*(r-l+1);
            if(l==0 && r==nums.size()-1) break;
            else if(l==0) r++;
            else if(r==nums.size()-1) l--;
            else if(nums[l-1]>nums[r+1]) l--;
            else if(nums[r+1]>=nums[l-1]) r++;
        }
        return maxscore;
    }

