class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int,int>> job;
        for(int i=0;i<profit.size();i++){
            job.push_back({profit[i],difficulty[i]});
        }
        sort(job.begin(),job.end(),greater<pair<int,int>>());
        int ans=0;
        for(int i=0;i<worker.size();i++){
            for(int j=0;j<job.size();j++){
                if(job[j].second<=worker[i]){
                    ans+=job[j].first;
                    break;
                }
            }
        }
        return ans;
    }
};