class Solution {
public:
    int totalMoney(int n) {
        int ans=0,count=0;
        while(n>0){
            if(n>=7){
               int temp=7*(1+(2*count)+7);
               temp=temp/2;
               ans+=temp;
            }
            else{
               int temp=n*(1+(2*count)+n);
               temp=temp/2;
               ans+=temp;
            }
            count++;
            n=n-7;
        }
        return ans;
    }
};