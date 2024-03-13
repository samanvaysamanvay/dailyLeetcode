class Solution {
public:
    int pivotInteger(int n) {
        int sum=(n*(n+1))/2;
        int cursum=0;
        for(int i=1;i<=n;i++){
           cursum+=i;
           if(cursum==sum) return i;
           sum-=i;
        }
        return -1;
    }
};