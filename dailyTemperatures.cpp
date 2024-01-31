class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(),0);
        stack<pair<int,int>> calc;
        for(int i=0;i<temperatures.size();i++){
                while(!calc.empty() && temperatures[i]>calc.top().first ){
                    ans[calc.top().second]=i-calc.top().second;
                    calc.pop();
                }
                calc.push({temperatures[i],i});
    }
    return ans;
    }
};