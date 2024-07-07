class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=0;
        while(numBottles>=numExchange){
            int rem=numBottles%numExchange;
            ans+=numBottles-rem;
            numBottles/=numExchange;
            numBottles+=rem;
        }
        return ans+numBottles;
    }
};