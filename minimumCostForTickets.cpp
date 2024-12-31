class Solution {
public:
    vector<int>dp;
    int solve(vector<int>& days, vector<int>& costs,int i){
        if(i==days.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int d1=0,d7=0,d30=0;
        int j=i;
        d1=costs[0]+solve(days,costs,j+1);
        while(j<days.size()){
            if(days[j]>=days[i]+7) break;
            j++;
        }
        d7=costs[1]+solve(days,costs,j);
        j=i;
        while(j<days.size()){
            if(days[j]>=days[i]+30) break;
            j++;
        }
        d30=costs[2]+solve(days,costs,j);

        return dp[i]=min(d1,min(d7,d30)); 
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        dp.resize(days.size(),-1);
        sort(days.begin(),days.end());
        return solve(days,costs,0);
    }
};