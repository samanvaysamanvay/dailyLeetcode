class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int mini=INT_MAX,mini2=INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<mini){
                mini2=mini;                
                mini=prices[i];
            }
            else if(prices[i]<mini2) mini2=prices[i];
        }
        return mini+mini2>money?money:money-(mini+mini2);
    }
};