class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans=0;
        for(int i=0;i<=k;i++){
            if(tickets[i]<tickets[k])   ans+=tickets[i];
            else ans+=tickets[k];
        }
        int i=k+1;
        while(i<tickets.size()){
            if(tickets[i]<tickets[k])   ans+=tickets[i];
            else ans+=tickets[k]-1;
            i++;           
        }
        return ans;
    }
};