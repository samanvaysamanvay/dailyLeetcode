class Solution {
    public:
        vector<long long> dp;
        long long solve(vector<vector<int>>& questions,int index){
            if(index>=questions.size()) return 0;
            else if(dp[index]!=-1) return dp[index];
            else{
            long long take=questions[index][0]+solve(questions,index+questions[index][1]+1);
            long long nottake=solve(questions,index+1);
            return dp[index]=max(take,nottake);
            }
        } 
        long long mostPoints(vector<vector<int>>& questions) {
            dp.resize(questions.size(),-1);
             return solve(questions,0);
        }
    };