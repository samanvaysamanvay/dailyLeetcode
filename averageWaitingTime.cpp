class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double ans=0;
        int prev=0;
        for(int i=0;i<customers.size();i++){
            if(prev>customers[i][0]) ans+=(prev-customers[i][0])+customers[i][1];
            else ans+=customers[i][1];
            prev=max(prev,customers[i][0])+customers[i][1];
        }
        return ans/customers.size();
    }
}; 