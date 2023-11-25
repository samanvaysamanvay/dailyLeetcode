class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int count=0,sum=0;
        int n=piles.size()-1;
        sort(piles.begin(),piles.end());
        while(count<piles.size()/3){
            sum=sum+piles[n-1];
            n=n-2;
            count++;
        }
        return sum;
    }
};