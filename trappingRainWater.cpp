class Solution {
public:
    int trap(vector<int>& height) {
        int sum=0,k,l=0,r=height.size()-1,maxl=height[l],maxr=height[r];
        while(l<r){
             if(maxl<=maxr){
                 l++;
                 k=maxl-height[l];
                 if(maxl<height[l]){
                     maxl=height[l];
                 }    
             }
             else{
                 r--;
                 k=maxr-height[r];
                 if(maxr<height[r]){
                     maxr=height[r];
                 }
             }
          if(k>0){
              sum=sum+k;
          }   
        }
        return sum;
    }
};