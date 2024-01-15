class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> ans;
        vector<int> winners;
        vector<int> losers;
        unordered_map<int,int> mp;
        for(int i=0;i<matches.size();i++){
            mp[matches[i][1]]++;
        }
        for(int i=0;i<matches.size();i++){
            if(!mp[matches[i][0]]){
                 winners.push_back(matches[i][0]);
                 mp[matches[i][0]]=-1;
            }
        }
        for(auto i:mp){
            if(i.second==1) losers.push_back(i.first);
        }
        sort(winners.begin(),winners.end());
        sort(losers.begin(),losers.end());

        ans.push_back(winners);
        ans.push_back(losers);
        
        return ans;
    }
};